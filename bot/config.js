module.exports = {
    client: {
        token: "MASUKAN-BOT-TOKEN-KALIAN-DI-SINI", // BOT TOKEN
        id: "1222402402464960675", // Aplication ID Bot
        guild: "1449225434687475768", // ID Server Discord
    }, // ICON DI BAWAH INI ADALAH LINK GAMBAR ATAU LOGO TUMBNAIL BOT NYA
    icon: {
        thumbnail: "https://cdn.discordapp.com/attachments/1449225435853619261/1452148660224655562/CHAXW_1.png?ex=6948c254&is=694770d4&hm=261ebe37635a8c5cb741282cd95074823fa931d246c59b9f51c9d25fbfc5a991",
        image: "https://cdn.discordapp.com/attachments/1449225435853619261/1452148660224655562/CHAXW_1.png?ex=6948c254&is=694770d4&hm=261ebe37635a8c5cb741282cd95074823fa931d246c59b9f51c9d25fbfc5a991",
    },
    mysql: {
        connectionLimit: 5, // SETTING MYSQL
        host: "localhost",
        user: "root",
        password: "",
        database: "chaxw",
    },
    server: {
        ip: "127.0.0.1", // IP SERVER
        port: "7777", // PORT SERVER
    },
    verifrole: {
        warga: '1449230104348852395' // ID ROLE UNTUK VERIFIKASI ROLE SEHABIS JOIN DC
    },
    idrole: {
        ucp: "1449228950579576832", // ID ROLE TERVERIFIKASI KETIKA SUDAH REGISTRASI UCP
    },
    handler: {
        prefix: "!", // PREFIX
        deploy: true,
        commands: {
            prefix: true,
            slash: true,
            user: true,
            message: true,
        }
    },
    staff: {
        s1: "1449225435006238896", // FOUNDER ID ROLE YA
        s2: "1449226832904978482", // CO FOUNDER ID ROLE YA
        s3: "1449227052103503914", // DEVELOPER ID ROLE YA
        s4: "1449227177877966989", //TEAM ADMINISTRATOR ID ROLE YA
    },
    development: {
        enabled: false,
        guild: "1449225434687475768", // SERVER ID
    },
    servers: {
        name: "CHAXW ROLEPLAY", // NAMA SERVER
    },
    messageSettings: {
        ownerMessage: "Pengembang bot memiliki satu-satunya izin untuk menggunakan perintah ini.",
        developerMessage: "Anda tidak berwenang untuk menggunakan perintah ini.",
        cooldownMessage: "Pelan-pelan sobat! Anda terlalu cepat untuk menggunakan perintah ini ({cooldown}s).",
        globalCooldownMessage: "Pelan-pelan sobat! Perintah ini berada pada cooldown global ({cooldown}s).",
        notHasPermissionMessage: "Anda tidak memiliki izin untuk menggunakan perintah ini.",
        notHasPermissionComponent: "Anda tidak memiliki izin untuk menggunakan komponen ini.",
        missingDevIDsMessage: "Ini adalah perintah khusus pengembang, tetapi tidak dapat dijalankan karena ID pengguna tidak ada di file konfigurasi."
    }
};
