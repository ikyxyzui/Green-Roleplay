const { ButtonInteraction } = require('discord.js');
const ExtendedClient = require('../../class/HezxyClient');
const config = require('../../../config');
const { IntSucces, IntError } = require('../../../functions');
const MysqlMortal = require('../../../Mysql');

module.exports = {
    customId: 'button-reffrole',
    /**
     * 
     * @param {ExtendedClient} client 
     * @param {ButtonInteraction} interaction 
     */
    run: async (client, interaction) => {
        const userid = interaction.user.id;

        MysqlMortal.query(`SELECT * FROM playerucp WHERE DiscordID = '${userid}'`, async (err, row) => {
            if (err) {
                console.error(err);
                return IntError(interaction, `**REFF ROLE | CHAXW ROLEPLAY!**\n:x: **ERROR!** \n\n> Terjadi kesalahan saat mengambil data dari database CHAXW ROLEPLAY.`);
            }

            if (row[0]) {
                const rUCP = await interaction.guild.roles.cache.get(config.idrole.ucp);

                interaction.member.roles.add(rUCP);
                interaction.member.setNickname(`${row[0].ucp}`);

                IntSucces(interaction, `**REFF ROLE CHAXW ROLEPLAY!**\n:white_check_mark: **Berhasil!**\n\n> Akun Discord Anda berhasil kami verifikasi sebagai pemain di CHAXW ROLEPLAY!.\n> Mohon untuk tidak keluar lagi dari Discord CHAXW ROLEPLAY!.`);
            } else {
                IntError(interaction, `**REFF ROLE | CHAXW ROLEPLAY!**\n:x: **ERROR!** \n\n> Anda belum pernah mendaftar/ambil tiket di CHAXW ROLEPLAY. Silakan ambil tiket terlebih dahulu.`);
            }
        });
    }
};
