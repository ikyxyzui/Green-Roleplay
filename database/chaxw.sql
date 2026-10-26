-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 21, 2025 at 12:15 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `chaxw`
--

-- --------------------------------------------------------

--
-- Table structure for table `actors`
--

CREATE TABLE `actors` (
  `ID` int(11) NOT NULL,
  `Skin` int(11) DEFAULT 1,
  `Anim` int(11) DEFAULT 0,
  `PosX` float DEFAULT 0,
  `PosY` float DEFAULT 0,
  `PosZ` float DEFAULT 0,
  `PosA` float DEFAULT 0,
  `Name` varchar(24) DEFAULT NULL,
  `World` int(11) DEFAULT 0,
  `Interior` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `actors`
--

INSERT INTO `actors` (`ID`, `Skin`, `Anim`, `PosX`, `PosY`, `PosZ`, `PosA`, `Name`, `World`, `Interior`) VALUES
(1, 93, 384, 1160.98, -1635.43, -26.7109, 90.6856, 'Melisa', 3, 3),
(6, 140, 738, 1160.99, -1640.24, -26.7109, 85.0629, 'Reyka', 3, 3),
(7, 0, 16, 2354.55, -657.224, 128.055, 275.254, 'STAFF', 0, 0),
(8, 63, 412, 1192.41, -886.944, 44.1107, 189.923, 'LC', 0, 0),
(9, 164, 0, 1189.36, -911.667, 43.3825, 192.208, 'SECURITY', 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `adminlogs`
--

CREATE TABLE `adminlogs` (
  `Name` varchar(64) DEFAULT 'N/A',
  `UCP` varchar(64) DEFAULT 'N/A',
  `Rank` varchar(64) DEFAULT 'N/A',
  `Activity` varchar(320) DEFAULT 'N/A',
  `Time` varchar(320) DEFAULT 'N/A'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `adminlogs`
--

INSERT INTO `adminlogs` (`Name`, `UCP`, `Rank`, `Activity`, `Time`) VALUES
('Chaxw_Chanw', 'Chaxw', '{FF0000}Pengurus', 'Menggunakan cmd /setadmin kepada Chaxw_Chanw menjadi admin leve', '2025-12-16 03:24:42'),
('Chaxw_Chanw', 'Chaxw', '{FF0000}Management', 'Menggunakan cmd /setadmin kepada Chaxw_Chanw menjadi admin leve', '2025-12-16 03:24:47'),
('Chaxw_Chanw', 'Chaxw', '{FF0000}Management', 'Menggunakan cmd /makepv membuat kendaraan Infernus dan diberikan kepada Chaxw_Chanw.', '2025-12-18 18:54:03'),
('Chaxw_Chanw', 'Chaxw', '{FF0000}Management', 'Menggunakan cmd /makepv membuat kendaraan Sultan dan diberikan kepada Chaxw_Chanw.', '2025-12-19 15:12:42'),
('Chaxw_Chanw', 'Chaxw', '{FF0000}Management', 'Menggunakan cmd /givemoney untuk Chaxw_Chanw dengan jumlah $1,000,000.', '2025-12-19 15:53:33'),
('Chaxw_Chanw', 'Chaxw', '{FF0000}Management', 'Menggunakan cmd /setvip {FF0000}Rangers Merah 0 hari kepada akun Chaxw_Chanw.', '2025-12-19 15:54:28'),
('Chaxw_Chanw', 'Chaxw', '{FF0000}Management', 'Menggunakan cmd /giveweap Desert Eagle(22 ammo) kepada akun dengan nama Chaxw_Chanw.', '2025-12-20 13:52:02');

-- --------------------------------------------------------

--
-- Table structure for table `arrestrecord`
--

CREATE TABLE `arrestrecord` (
  `ID` int(11) DEFAULT -1,
  `Date` varchar(64) DEFAULT NULL,
  `Reason` varchar(64) DEFAULT NULL,
  `Issuer` varchar(64) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `atms`
--

CREATE TABLE `atms` (
  `id` int(11) NOT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `posrx` float DEFAULT NULL,
  `posry` float DEFAULT NULL,
  `posrz` float DEFAULT NULL,
  `interior` int(11) DEFAULT 0,
  `world` int(11) DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `atms`
--

INSERT INTO `atms` (`id`, `posx`, `posy`, `posz`, `posrx`, `posry`, `posrz`, `interior`, `world`) VALUES
(0, 1302.02, -1869.31, 13.654, 0, 0, 0, 0, 0),
(6, 217.88, -1439.48, 13.2452, 0, 0, 134.6, 0, 0),
(1, 1245.87, 325.084, 19.5547, -0.499994, 0.500001, -117.3, 0, 0),
(3, 378.255, -2057.81, 8.01981, -2.2, 0, 84.9999, 0, 0),
(4, 421.256, -1319.96, 14.9872, 0.8, -0.699999, 29.2, 0, 0),
(5, 1680.22, -2335.87, 13.5469, 0, 0, 179.6, 0, 0),
(2, 551.754, -1820.04, 6.97917, 0, 0, 0, 0, 0),
(7, -86.6225, 1021.75, 20.4911, 0, 0, 0, 0, 0),
(8, 2300.18, -905.723, 109.714, 0, 0, 0, 0, 0),
(9, 1099.02, -1239.61, 16.1203, 0, 0, -180, 0, 0),
(10, 1566.02, -1662.2, 16.2039, 0, 0, 179.2, 0, 0),
(11, 2286.86, 603.549, 10.8203, 0, 0, 180, 0, 0),
(12, 1093.34, -1776.08, 13.9219, 0, 0, -179, 0, 0),
(13, 2354.02, -653.695, 128.055, 0, 0, 91.4, 0, 0),
(14, 2116.25, 2424.89, 40.9219, 0, 0, -94.8, 0, 0),
(15, 2521.24, 2379.03, 4.01594, -6.01836, 1.74528, -87.2381, 0, 0),
(16, 713.477, 1952.19, 5.53906, 0, 0, 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `badside_brankas`
--

CREATE TABLE `badside_brankas` (
  `ID` int(11) DEFAULT -1,
  `fItemID` int(11) NOT NULL,
  `fItemName` varchar(32) DEFAULT NULL,
  `fItemModel` int(11) DEFAULT 0,
  `fItemQuantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `badside_brankas`
--

INSERT INTO `badside_brankas` (`ID`, `fItemID`, `fItemName`, `fItemModel`, `fItemQuantity`) VALUES
(10, 13, 'Kevlar', 19515, 15),
(0, 63, 'Bubur Pedas', 19568, 20),
(11, 65, 'Sampah Makanan', 2840, 12),
(10, 79, 'Kayu Kemas', 2912, 60),
(15, 88, 'Petrol', 19621, 22),
(10, 93, 'Material', 19843, 391),
(15, 101, 'Kanabis', 19473, 259),
(10, 116, 'Besi', 19809, 199),
(10, 118, 'Batu Kotor', 3930, 100),
(2, 131, 'Kayu', 19793, 21),
(15, 134, 'Material', 19843, 120),
(18, 143, 'Vape', 19897, 5),
(2, 150, 'Sampah Makanan', 2840, 1),
(10, 159, 'Kaca', 1649, 10),
(10, 160, 'Baja', 19772, 16),
(15, 165, 'Sampah Makanan', 2840, 25),
(3, 196, 'Sampah Makanan', 2840, 15),
(13, 200, 'Kanabis', 19473, 31),
(18, 206, 'Kanabis', 19473, 133),
(17, 208, 'GAS', 1650, 10),
(15, 209, 'Bandage', 11736, 10),
(4, 211, 'Sampah Makanan', 2840, 18),
(3, 217, 'Bandage', 11736, 73),
(1, 223, 'Material', 19843, 102),
(1, 224, 'Besi', 19809, 212),
(1, 225, 'Tembaga', 11748, 185),
(1, 226, 'Emas', 19941, 17),
(2, 237, 'Kanabis', 19473, 93),
(2, 239, 'Penyu', 1609, 60),
(5, 242, 'Hiu', 1608, 1),
(5, 244, 'Kanabis', 19473, 4),
(6, 246, 'Kanabis', 19473, 106),
(0, 254, 'Kevlar', 19515, 5),
(0, 255, 'Batu Kotor', 3930, 4),
(9, 259, 'Kanabis', 19473, 20),
(8, 260, 'Kanabis', 19473, 124),
(0, 266, 'Material', 19843, 3),
(0, 268, 'Pure Oil', 3632, 147),
(8, 273, 'Plastik', 1264, 8),
(4, 281, 'Nasi Goreng', 2355, 1),
(8, 284, 'Petrol', 19621, 100),
(8, 285, 'Boxmats', 2912, 18),
(8, 286, 'Plat Besi', 3117, 8),
(12, 297, 'Baja', 19772, 1057),
(12, 298, 'Kaca', 1649, 1734),
(12, 300, 'Tembaga', 11748, 358),
(12, 301, 'Besi', 19809, 478),
(12, 302, 'Material', 19843, 296),
(12, 303, 'Kayu Kemas', 2912, 200),
(12, 305, 'Es Teh', 1546, 80),
(12, 306, 'Nasi Goreng', 2355, 140),
(0, 313, 'Kanabis', 19473, 308),
(3, 316, 'Kevlar', 19515, 41),
(11, 320, 'Radio', 19942, 90),
(11, 321, 'Bandage', 11736, 40),
(12, 327, 'Kevlar', 19515, 45),
(6, 330, 'Kevlar', 19515, 4),
(15, 333, 'Medkit', 11738, 20),
(15, 334, 'Besi', 19809, 95),
(15, 335, 'Tembaga', 11748, 74),
(13, 336, 'Alprazolam', 1241, 1),
(12, 337, 'Tools Kit', 19918, 7),
(12, 338, 'Sampah Makanan', 2840, 73),
(12, 339, 'Uang Merah', 1212, 10000),
(4, 340, 'Kanabis', 19473, 400),
(4, 341, 'Bandage', 11736, 40),
(4, 342, 'Kevlar', 19515, 56),
(1, 344, 'Kevlar', 19515, 9),
(12, 345, 'Kanabis', 19473, 52),
(12, 346, 'Kayu', 19793, 15);

-- --------------------------------------------------------

--
-- Table structure for table `bengkel_brankas`
--

CREATE TABLE `bengkel_brankas` (
  `PID` int(11) DEFAULT 0,
  `ID` int(11) NOT NULL,
  `Item` varchar(64) NOT NULL DEFAULT '-',
  `Model` int(11) DEFAULT 0,
  `Quantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `bengkel_brankas`
--

INSERT INTO `bengkel_brankas` (`PID`, `ID`, `Item`, `Model`, `Quantity`) VALUES
(0, 1, 'Tools Kit', 19918, 273),
(0, 2, 'Repair Kit', 19921, 743),
(0, 3, 'Tembaga', 11748, 10),
(0, 4, 'Petrol', 19621, 620),
(0, 5, 'Besi', 19809, 69),
(0, 6, 'Pure Oil', 3632, 420),
(0, 15, 'Nasi Goreng', 2355, 350),
(0, 24, 'Es Teh', 1546, 580);

-- --------------------------------------------------------

--
-- Table structure for table `bike_rentals`
--

CREATE TABLE `bike_rentals` (
  `RentID` int(11) NOT NULL DEFAULT -1,
  `RentalX` float DEFAULT 0,
  `RentalY` float DEFAULT 0,
  `RentalZ` float DEFAULT 0,
  `RentSpawnX` float DEFAULT 0,
  `RentSpawnY` float DEFAULT 0,
  `RentSpawnZ` float DEFAULT 0,
  `RentSpawnA` float DEFAULT 0,
  `RentType` int(11) DEFAULT 1,
  `RentTime` int(11) DEFAULT 0,
  `RentInterior` int(11) DEFAULT -1,
  `RentVW` int(11) DEFAULT -1
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `bike_rentals`
--

INSERT INTO `bike_rentals` (`RentID`, `RentalX`, `RentalY`, `RentalZ`, `RentSpawnX`, `RentSpawnY`, `RentSpawnZ`, `RentSpawnA`, `RentType`, `RentTime`, `RentInterior`, `RentVW`) VALUES
(0, 1682.94, -2312.33, 13.5469, 1683.5, -2315.15, 13.3828, 162.167, 1, 1800, 0, 0),
(1, 2748.63, -2444.13, 13.705, 2742.22, -2442.51, 13.695, 197.689, 1, 1800, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `blacklist_players`
--

CREATE TABLE `blacklist_players` (
  `PID` int(11) DEFAULT -1,
  `PoliceIssuer` varchar(64) DEFAULT '',
  `PoliceIssuerRank` varchar(64) DEFAULT '',
  `PoliceReason` varchar(320) DEFAULT '',
  `PoliceDuration` int(11) DEFAULT 0,
  `PemerintahIssuer` varchar(64) DEFAULT '',
  `PemerintahIssuerRank` varchar(64) DEFAULT '',
  `PemerintahReason` varchar(320) DEFAULT '',
  `PemerintahDuration` int(11) DEFAULT 0,
  `EMSIssuer` varchar(64) DEFAULT '',
  `EMSIssuerRank` varchar(64) DEFAULT '',
  `EMSReason` varchar(320) DEFAULT '',
  `EMSDuration` int(11) DEFAULT 0,
  `BengkelIssuer` varchar(64) DEFAULT '',
  `BengkelIssuerRank` varchar(64) DEFAULT '',
  `BengkelReason` varchar(320) DEFAULT '',
  `BengkelDuration` int(11) DEFAULT 0,
  `PedagangIssuer` varchar(64) DEFAULT '',
  `PedagangIssuerRank` varchar(64) DEFAULT '',
  `PedagangReason` varchar(320) DEFAULT '',
  `PedagangDuration` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `blacklist_players`
--

INSERT INTO `blacklist_players` (`PID`, `PoliceIssuer`, `PoliceIssuerRank`, `PoliceReason`, `PoliceDuration`, `PemerintahIssuer`, `PemerintahIssuerRank`, `PemerintahReason`, `PemerintahDuration`, `EMSIssuer`, `EMSIssuerRank`, `EMSReason`, `EMSDuration`, `BengkelIssuer`, `BengkelIssuerRank`, `BengkelReason`, `BengkelDuration`, `PedagangIssuer`, `PedagangIssuerRank`, `PedagangReason`, `PedagangDuration`) VALUES
(1, '', '', '', 0, '', '', '', 0, '', '', '', 0, '', '', '', 0, '', '', '', 0),
(2, '', '', '', 0, '', '', '', 0, '', '', '', 0, '', '', '', 0, '', '', '', 0),
(3, '', '', '', 0, '', '', '', 0, '', '', '', 0, '', '', '', 0, '', '', '', 0);

-- --------------------------------------------------------

--
-- Table structure for table `brankas_bengkel`
--

CREATE TABLE `brankas_bengkel` (
  `id` int(11) NOT NULL DEFAULT 0,
  `RepairKit` int(11) DEFAULT 0,
  `ToolsKit` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `brankas_ems`
--

CREATE TABLE `brankas_ems` (
  `id` int(11) NOT NULL DEFAULT 0,
  `moneysamd` int(11) DEFAULT 0,
  `medkit` int(11) DEFAULT 0,
  `pillstress` int(11) DEFAULT 0,
  `bandage` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `brankas_ems`
--

INSERT INTO `brankas_ems` (`id`, `moneysamd`, `medkit`, `pillstress`, `bandage`) VALUES
(0, 1000, 2792, 2243, 720);

-- --------------------------------------------------------

--
-- Table structure for table `brankas_gojek`
--

CREATE TABLE `brankas_gojek` (
  `id` int(11) NOT NULL DEFAULT 0,
  `moneygojek` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `brankas_gojek`
--

INSERT INTO `brankas_gojek` (`id`, `moneygojek`) VALUES
(0, 194000);

-- --------------------------------------------------------

--
-- Table structure for table `brankas_lounges`
--

CREATE TABLE `brankas_lounges` (
  `id` int(11) NOT NULL DEFAULT 0,
  `sambal` bigint(20) DEFAULT 0,
  `beras` bigint(20) DEFAULT 0,
  `gula` bigint(20) DEFAULT 0,
  `garam` bigint(20) DEFAULT 0,
  `ikan` bigint(20) DEFAULT 0,
  `ayamfillet` bigint(20) DEFAULT 0,
  `susuolahan` bigint(20) DEFAULT 0,
  `airmineral` bigint(20) DEFAULT 0,
  `nasigoreng` bigint(20) DEFAULT 0,
  `bakso` bigint(20) DEFAULT 0,
  `nasipecel` bigint(20) DEFAULT 0,
  `buburpedas` bigint(20) DEFAULT 0,
  `susufresh` bigint(20) DEFAULT 0,
  `esteh` bigint(20) DEFAULT 0,
  `kopikenangan` bigint(20) DEFAULT 0,
  `cochomatcha` bigint(20) DEFAULT 0,
  `moneypedagang` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `brankas_lounges`
--

INSERT INTO `brankas_lounges` (`id`, `sambal`, `beras`, `gula`, `garam`, `ikan`, `ayamfillet`, `susuolahan`, `airmineral`, `nasigoreng`, `bakso`, `nasipecel`, `buburpedas`, `susufresh`, `esteh`, `kopikenangan`, `cochomatcha`, `moneypedagang`) VALUES
(0, 120, 238, 100, 400, 908, 790, 700, 400, 320, 550, 429, 244, 565, 446, 160, 310, 1000);

-- --------------------------------------------------------

--
-- Table structure for table `brankas_police`
--

CREATE TABLE `brankas_police` (
  `id` int(11) DEFAULT 0,
  `sapdmoney` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `brankas_police`
--

INSERT INTO `brankas_police` (`id`, `sapdmoney`) VALUES
(0, 151205),
(0, 151205);

-- --------------------------------------------------------

--
-- Table structure for table `bulletin`
--

CREATE TABLE `bulletin` (
  `ID` int(11) DEFAULT NULL,
  `Date` varchar(64) DEFAULT 'N/A',
  `Text` varchar(128) DEFAULT 'N/A',
  `Issuer` varchar(24) DEFAULT 'N/A',
  `Suspect` varchar(24) DEFAULT 'N/A'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `business`
--

CREATE TABLE `business` (
  `ID` int(11) NOT NULL,
  `Owner` varchar(64) DEFAULT NULL,
  `Name` varchar(128) DEFAULT NULL,
  `Money` int(11) DEFAULT NULL,
  `Type` int(11) DEFAULT NULL,
  `Stock` int(11) DEFAULT NULL,
  `Price0` int(11) DEFAULT NULL,
  `Price1` int(11) DEFAULT NULL,
  `Price2` int(11) DEFAULT NULL,
  `Price3` int(11) DEFAULT NULL,
  `Price4` int(11) DEFAULT NULL,
  `Price5` int(11) DEFAULT NULL,
  `Price6` int(11) DEFAULT NULL,
  `Price7` int(11) DEFAULT NULL,
  `Price8` int(11) DEFAULT NULL,
  `Price9` int(11) DEFAULT NULL,
  `Price10` int(11) DEFAULT NULL,
  `World` int(11) DEFAULT NULL,
  `Interior` int(11) DEFAULT NULL,
  `pointX` float DEFAULT NULL,
  `pointY` float DEFAULT NULL,
  `pointZ` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `buttons`
--

CREATE TABLE `buttons` (
  `ID` int(11) NOT NULL,
  `Faction` int(11) DEFAULT 0,
  `Faction2` int(11) DEFAULT 0,
  `Family` int(11) DEFAULT -1,
  `Owner` int(11) DEFAULT -1,
  `DoorModel` int(11) DEFAULT 0,
  `World` int(11) DEFAULT 0,
  `Interior` int(11) DEFAULT 0,
  `Speed` float DEFAULT 0,
  `ButtonX` float DEFAULT 0,
  `ButtonY` float DEFAULT 0,
  `ButtonZ` float DEFAULT 0,
  `ButtonRX` float DEFAULT 0,
  `ButtonRY` float DEFAULT 0,
  `ButtonRZ` float DEFAULT 0,
  `DoorCX` float DEFAULT 0,
  `DoorCY` float DEFAULT 0,
  `DoorCZ` float DEFAULT 0,
  `DoorCRX` float DEFAULT 0,
  `DoorCRY` float DEFAULT 0,
  `DoorCRZ` float DEFAULT 0,
  `DoorOX` float DEFAULT 0,
  `DoorOY` float DEFAULT 0,
  `DoorOZ` float DEFAULT 0,
  `DoorORX` float DEFAULT 0,
  `DoorORY` float DEFAULT 0,
  `DoorORZ` float DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `buttons`
--

INSERT INTO `buttons` (`ID`, `Faction`, `Faction2`, `Family`, `Owner`, `DoorModel`, `World`, `Interior`, `Speed`, `ButtonX`, `ButtonY`, `ButtonZ`, `ButtonRX`, `ButtonRY`, `ButtonRZ`, `DoorCX`, `DoorCY`, `DoorCZ`, `DoorCRX`, `DoorCRY`, `DoorCRZ`, `DoorOX`, `DoorOY`, `DoorOZ`, `DoorORX`, `DoorORY`, `DoorORZ`) VALUES
(1, 0, 0, 7, -1, 11327, 0, 0, 4, -1852.17, -1627.04, 22.4197, 0, 0, 0, -1857.4, -1627.02, 22.9173, 0, 0, 89.4, -1857.4, -1627.02, 19.1672, 0, 0, 89.4),
(3, 0, 0, -1, -1, 19302, 0, 0, 5, 830.098, -2017.46, 13.2772, 0, 0, -177.8, 828.74, -2017.5, 13.1472, 0, 0, 0, 828.74, -2017.5, 10.4972, 0, 0, 0),
(4, 0, 0, 1, -1, 19303, 1, 1, 1, -792.876, 495.755, 1372.27, 0, 0, 88.8, -791.871, 495.3, 1372.03, 0, 0, 0, -790.599, 495.238, 1371.96, 0, 0, 0),
(6, 0, 0, -1, -1, 2634, 1, 3, 1, 961.913, -4.53518, 1001.66, 0, 0, 0, 961.034, -4.4087, 1001.32, 0, 0, -179.8, 961.034, -4.4087, 998.587, 0, 0, -179.8),
(8, 0, 0, -1, -1, 19336, 0, 0, 1, 165.126, -1962.69, 4.25965, 0, 0, -124.1, 155.136, -1959.22, 2.73965, 0, 0, 0, 155.136, -1959.22, 53.9597, 0, 0, 0),
(9, 3, 0, -1, -1, 3089, 0, 0, 3, 1250.51, -1312.25, 1061.71, 0, 0, 179.3, 1250.88, -1312.28, 1061.31, 0, 0, 0, 1249.36, -1312.28, 1061.31, 0, 0, 0),
(12, 6, 6, -1, -1, 3089, 0, 0, 3, 2877.14, -1997.35, 11.5684, 0, 0, -0.300005, 2877.21, -1998.86, 11.3184, 0, 0, 89.8, 2877.21, -2000.31, 11.3184, 0, 0, 89.8),
(13, 1, 3, -1, -1, 3089, 0, 0, 2.5, 238.403, 1873.31, 12.0109, 0, 0, -89.8999, 238.439, 1873.06, 11.2809, 0, 0, -90, 238.439, 1874.62, 11.2809, 0, 0, -90),
(14, 1, 1, -1, -1, 19857, 0, 0, 2.5, 240.337, 1862.78, 14.3773, 0, 0, 178.9, 238.583, 1862.77, 14.3602, 0, 0, 0, 237.023, 1862.77, 14.3602, 0, 0, 0),
(15, 1, 3, -1, -1, 3089, 0, 0, 2.5, 248.159, 1842.12, 9.30269, 0, 0, -179.9, 248.596, 1842.12, 9.01345, 0, 0, 0, 250.136, 1842.12, 9.01345, 0, 0, 0),
(16, 1, 3, -1, -1, 3089, 0, 0, 2.5, 295.629, 1821.66, 8.41052, 0, 0, 0, 295.977, 1821.67, 7.98052, 0, 0, 0, 294.477, 1821.67, 7.98052, 0, 0, 0),
(27, 1, 1, -1, -1, 3089, 6, 6, 3, 1498.19, -2853.07, 1591.98, 0, 0, -90, 1498.23, -2854.9, 1591.7, 0, 0, 90, 1498.23, -2856.32, 1591.7, 0, 0, 90),
(28, 1, 1, -1, -1, 3089, 6, 6, 3, 1497.69, -2872.78, 1591.96, 0, 0, 179.9, 1495.9, -2872.84, 1591.73, 0, 0, 0, 1497.36, -2872.84, 1591.73, 0, 0, 0),
(29, 6, 6, -1, -1, 3089, 0, 0, 3, 2882.73, -1998.6, 16.4684, 0, 0, -90, 2882.8, -1996.86, 16.2084, 0, 0, -89.7, 2882.81, -1998.53, 16.2084, 0, 0, -89.7),
(30, 6, 6, -1, -1, 10575, 0, 0, 5, 2869.03, -1988.4, 11.4916, 0, 0, 0, 2868.72, -1991.26, 12.1816, 0, 0, 0, 2868.72, -1991.26, 8.25155, 0, 0, 0),
(31, 6, 6, -1, -1, 11416, 0, 0, 5, 2876.9, -2003.1, 11.3684, 0, 0, -92.4001, 2875.04, -2004.71, 11.1384, 0, 0, 90.5, 2875.04, -2004.71, 8.05835, 0, 0, 90.5),
(32, 6, 6, -1, -1, 2963, 0, 0, 5, 2894.97, -2003.58, 11.5384, 0, 0, 93.5, 2896.7, -2004.22, 11.2784, 0, 0, 89.4, 2896.7, -2004.22, 7.96837, 0, 0, 89.4),
(33, 6, 6, -1, -1, 11416, 0, 0, 5, 2898.35, -1989.84, 11.6184, 0, 0, -93.0001, 2898.64, -1992.68, 11.3684, 0, 0, 0, 2898.64, -1992.68, 8.07835, 0, 0, 0),
(37, 0, 0, -1, -1, 9241, 0, 0, 10, -1482.87, 709.68, 6.00663, 0, 0, 87.5, -1464.27, 697.807, -11.0497, 0, 0, -89.5, -1464.27, 697.807, 1.94031, 0, 0, -87.2999),
(38, 0, 0, -1, -1, 19859, 0, 0, 5, 847.291, -1368.46, 22.9753, 0, 0, 88.4, 847.242, -1368.11, 22.7722, 0, 0, 90.3999, 847.23, -1366.54, 22.7722, 0, 0, 90.3999);

-- --------------------------------------------------------

--
-- Table structure for table `capres`
--

CREATE TABLE `capres` (
  `ID` int(11) NOT NULL,
  `Capres` varchar(50) DEFAULT NULL,
  `Cawapres` varchar(50) DEFAULT NULL,
  `Suara` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `charges`
--

CREATE TABLE `charges` (
  `ChargesID` int(11) NOT NULL,
  `ID` int(11) NOT NULL DEFAULT -1,
  `Date` varchar(64) NOT NULL DEFAULT 'N/A',
  `Description` varchar(128) NOT NULL DEFAULT 'N/A',
  `Issuer` varchar(64) NOT NULL DEFAULT 'N/A',
  `StatusActived` tinyint(4) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `clothes_wardrobe`
--

CREATE TABLE `clothes_wardrobe` (
  `IDs` int(11) DEFAULT -1,
  `clothesName` varchar(64) NOT NULL DEFAULT 'N/A',
  `clothesModel` int(11) DEFAULT 0,
  `acc0_model` int(11) DEFAULT 0,
  `acc0_bone` int(11) DEFAULT 0,
  `acc0_posX` float DEFAULT 0,
  `acc0_posY` float DEFAULT 0,
  `acc0_posZ` float DEFAULT 0,
  `acc0_posRX` float DEFAULT 0,
  `acc0_posRY` float DEFAULT 0,
  `acc0_posRZ` float DEFAULT 0,
  `acc0_posSX` float DEFAULT 0,
  `acc0_posSY` float DEFAULT 0,
  `acc0_posSZ` float DEFAULT 0,
  `acc1_model` int(11) DEFAULT 0,
  `acc1_bone` int(11) DEFAULT 0,
  `acc1_posX` float DEFAULT 0,
  `acc1_posY` float DEFAULT 0,
  `acc1_posZ` float DEFAULT 0,
  `acc1_posRX` float DEFAULT 0,
  `acc1_posRY` float DEFAULT 0,
  `acc1_posRZ` float DEFAULT 0,
  `acc1_posSX` float DEFAULT 0,
  `acc1_posSY` float DEFAULT 0,
  `acc1_posSZ` float DEFAULT 0,
  `acc2_model` int(11) DEFAULT 0,
  `acc2_bone` int(11) DEFAULT 0,
  `acc2_posX` float DEFAULT 0,
  `acc2_posY` float DEFAULT 0,
  `acc2_posZ` float DEFAULT 0,
  `acc2_posRX` float DEFAULT 0,
  `acc2_posRY` float DEFAULT 0,
  `acc2_posRZ` float DEFAULT 0,
  `acc2_posSX` float DEFAULT 0,
  `acc2_posSY` float DEFAULT 0,
  `acc2_posSZ` float DEFAULT 0,
  `acc3_model` int(11) DEFAULT 0,
  `acc3_bone` int(11) DEFAULT 0,
  `acc3_posX` float DEFAULT 0,
  `acc3_posY` float DEFAULT 0,
  `acc3_posZ` float DEFAULT 0,
  `acc3_posRX` float DEFAULT 0,
  `acc3_posRY` float DEFAULT 0,
  `acc3_posRZ` float DEFAULT 0,
  `acc3_posSX` float DEFAULT 0,
  `acc3_posSY` float DEFAULT 0,
  `acc3_posSZ` float DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `clothes_wardrobe`
--

INSERT INTO `clothes_wardrobe` (`IDs`, `clothesName`, `clothesModel`, `acc0_model`, `acc0_bone`, `acc0_posX`, `acc0_posY`, `acc0_posZ`, `acc0_posRX`, `acc0_posRY`, `acc0_posRZ`, `acc0_posSX`, `acc0_posSY`, `acc0_posSZ`, `acc1_model`, `acc1_bone`, `acc1_posX`, `acc1_posY`, `acc1_posZ`, `acc1_posRX`, `acc1_posRY`, `acc1_posRZ`, `acc1_posSX`, `acc1_posSY`, `acc1_posSZ`, `acc2_model`, `acc2_bone`, `acc2_posX`, `acc2_posY`, `acc2_posZ`, `acc2_posRX`, `acc2_posRY`, `acc2_posRZ`, `acc2_posSX`, `acc2_posSY`, `acc2_posSZ`, `acc3_model`, `acc3_bone`, `acc3_posX`, `acc3_posY`, `acc3_posZ`, `acc3_posRX`, `acc3_posRY`, `acc3_posRZ`, `acc3_posSX`, `acc3_posSY`, `acc3_posSZ`) VALUES
(660, '660', 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(660, '660', 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(358, 'IROMA IRAMA', 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19515, 1, 0.1, 0.05, 0, 0, 0, 0, 1, 1.15, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(358, 'IROMA IRAMA', 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(358, 'MC ', 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19515, 1, 0.1, 0.05, 0, 0, 0, 0, 1, 1.15, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(747, 'cesar', 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(61, 'sulthan', 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11745, 1, -0.14, -0.08, 0, 81, 84, 9, 0.58, 0.64, 0.56),
(2031, '288', 268, 19096, 2, 0.18, 0, 0, 1.5, 0, 1.5, 1, 1.12, 1.09, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11745, 1, 0, -0.22, -0.02, 96, 0, 57, 0.74, 1.9, 1),
(950, 'baju', 180, 18977, 2, 0.08, 0, 0, 93, 93, -12, 1.16, 0.94, 1.04, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 1, -0.076, 0.169, -0.012, 0, 86.5, 0, 1, 1, 1);

-- --------------------------------------------------------

--
-- Table structure for table `contacts`
--

CREATE TABLE `contacts` (
  `ID` int(11) DEFAULT -1,
  `contactID` int(11) NOT NULL,
  `contactName` varchar(32) DEFAULT 'None',
  `contactNumber` varchar(64) NOT NULL DEFAULT '-',
  `contactOwner` int(11) DEFAULT -1,
  `contactUnread` int(11) DEFAULT 0,
  `contactBlocked` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `crimebroadcast`
--

CREATE TABLE `crimebroadcast` (
  `ID` int(11) DEFAULT NULL,
  `Date` varchar(64) DEFAULT '-',
  `Text` varchar(128) DEFAULT '-',
  `Sender` varchar(64) DEFAULT '-'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `crimebroadcast`
--

INSERT INTO `crimebroadcast` (`ID`, `Date`, `Text`, `Sender`) VALUES
(1, '2024-07-16 17:34:15', 'DIHARAPKAN WARGA UNTUK MENJAUH DARI SEKITAR WARUNG VINEWOOD', 'Cecep Sugeni'),
(1, '2024-07-17 00:14:09', 'tes', 'Bagio Pattinson'),
(1, '2024-07-17 18:35:15', 'pasal 1111', 'Abdul Firmansyah'),
(1, '2024-07-17 19:04:57', 'tes tes', 'Abdul Firmansyah'),
(1, '2024-07-18 15:59:51', 'tes', 'Jojo Marhudin'),
(1, '2024-07-19 23:25:11', 'tes', 'Ardy Pattinson'),
(1, '2024-07-19 23:45:41', 'UUD 3.1 3.4 3.5 4.4 4.5 5.1 5.4 5.9 6.9 SIAGA 3', 'Arga Alvino'),
(1, '2024-07-20 10:38:22', 'test', 'Ardian Siregar'),
(1, '2024-07-24 21:58:50', 'SIAGA 2 DIDAERAH IDLEWOOD KAMI NYATAKAN, TERIMAKASIH.', 'Bagio Pattinson'),
(1, '2024-07-25 16:01:40', 'PENGANCAMAN KEPADA PETUGAS KEPOLISIAN', 'Sukri Marsudi'),
(1, '2024-08-03 22:10:53', 'WARGA HARAP MENJAUH DARI ROMBONGAN KEPOLISIAN ATAU AKAN KAMI TINDAK TEGASS', 'Bagio Pattinson'),
(1, '2024-08-20 21:08:14', 'senjata ilegal dan penembakan', 'Alvian Mahesa'),
(1, '2024-08-22 21:54:48', '4.4,5.1,6.0', 'Partolo Dininggrat'),
(1, '2024-08-22 21:59:34', '4.4', 'Zevanya Atmadewa'),
(1, '2024-08-24 21:54:56', 'Baron Prawiraharja Mantan Jenderal Polisi, Kasus Membawa barang Sitaan saat mengundurkan Diri.', 'Yeremia Endang'),
(1, '2024-08-30 21:22:38', '5.1,3.1,5.4,4.5,47', 'Moji Laskawara'),
(1, '2024-08-31 21:48:00', '5.1 4.5 2.6 1.0', 'Aziel Juniper'),
(1, '2024-10-09 22:34:41', '3.9,4.4,4.5,5.1,5.4,5.7,5.8,5.9,6.3', 'Keenan Aksarna'),
(1, '2024-10-16 23:12:24', '1,8.3,6 16000 25', 'Moji Laskawara'),
(1, '2024-10-24 15:55:07', 'Add new criminal broadcats            ', 'Ethan Ravendra'),
(1, '2024-10-25 13:06:40', 'need backup', 'Alvian Mahesa');

-- --------------------------------------------------------

--
-- Table structure for table `criminallogs`
--

CREATE TABLE `criminallogs` (
  `OwnerID` int(11) DEFAULT NULL,
  `Sender` varchar(24) DEFAULT 'Unknows',
  `History` varchar(128) DEFAULT NULL,
  `Time` varchar(64) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `damagelogs`
--

CREATE TABLE `damagelogs` (
  `IDs` int(11) DEFAULT -1,
  `dWeapon` int(11) DEFAULT 0,
  `dBodyPart` int(11) DEFAULT 0,
  `dAmount` float DEFAULT 0,
  `dIssuer` varchar(64) DEFAULT '-',
  `dTime` varchar(64) DEFAULT '-'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `damagelogs`
--

INSERT INTO `damagelogs` (`IDs`, `dWeapon`, `dBodyPart`, `dAmount`, `dIssuer`, `dTime`) VALUES
(1, 51, 3, 14.5, 'Diri Sendiri', '2025-12-19 04:09:03'),
(1, 54, 3, 2.1, 'Diri Sendiri', '2025-12-20 00:16:12');

-- --------------------------------------------------------

--
-- Table structure for table `discordlog`
--

CREATE TABLE `discordlog` (
  `Admin` varchar(50) DEFAULT NULL,
  `Action` varchar(100) DEFAULT NULL,
  `Tujuan` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `doors`
--

CREATE TABLE `doors` (
  `ID` int(11) NOT NULL,
  `name` varchar(50) DEFAULT 'None',
  `password` varchar(50) DEFAULT '',
  `icon` int(11) DEFAULT 19130,
  `mapicon` tinyint(4) DEFAULT 0,
  `locked` int(11) DEFAULT 0,
  `admin` int(11) DEFAULT 0,
  `owner` int(11) DEFAULT -1,
  `vip` int(11) DEFAULT 0,
  `faction` int(11) DEFAULT 0,
  `family` int(11) DEFAULT -1,
  `garage` tinyint(4) DEFAULT 0,
  `custom` int(11) DEFAULT 0,
  `extvw` int(11) DEFAULT 0,
  `extint` int(11) DEFAULT 0,
  `extposx` float DEFAULT 0,
  `extposy` float DEFAULT 0,
  `extposz` float DEFAULT 0,
  `extposa` float DEFAULT 0,
  `intvw` int(11) DEFAULT 0,
  `intint` int(11) DEFAULT 0,
  `intposx` float DEFAULT 0,
  `intposy` float DEFAULT 0,
  `intposz` float DEFAULT 0,
  `intposa` float DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `doors`
--

INSERT INTO `doors` (`ID`, `name`, `password`, `icon`, `mapicon`, `locked`, `admin`, `owner`, `vip`, `faction`, `family`, `garage`, `custom`, `extvw`, `extint`, `extposx`, `extposy`, `extposz`, `extposa`, `intvw`, `intint`, `intposx`, `intposy`, `intposz`, `intposa`) VALUES
(1, 'Bahamas', '', 1318, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 2421.54, -1219.58, 25.54, 180.488, 55, 2, 1204.78, -13.6534, 1000.92, 357.277),
(3, 'Pintu Penjara Federal', '', 1247, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 313.489, 1838.33, 7.82812, 0.777832, 0, 0, 313.538, 1835.4, 7.80739, 182.257),
(6, 'Recycler', '', 2912, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 2291.87, 2764.06, 10.8203, 269.608, 0, 6, -1464.84, 2646.84, 28.9015, 178.457),
(7, 'Bandara International', '', 19130, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 1685.74, -2335.33, 13.5469, 2.29448, 0, 0, 1771.7, -2517.23, 20.2869, 89.3074),
(8, 'Pemerintah Daerah', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 1483.46, -1762.6, 13.8969, 3.12656, 0, 0, 2830.67, -2855.47, 9989.61, 185.998),
(10, 'SHOWROOM', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 557.224, -1293.52, 17.2483, 3.17169, 0, 2, 1026.39, 252.53, 15.5392, 178.872),
(12, 'Boxing', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 2229.86, -1721.22, 13.5608, 134.421, 0, 7, 774.001, -78.8461, 1000.66, 1.02202),
(13, 'Bahamas LV', '', 1314, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 2227.15, 1837.09, 10.8203, 93.4703, 100, 3, -2636.59, 1402.55, 906.461, 0.027976),
(14, 'Bahamas', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, -2442.96, 755.412, 35.1719, 179.937, 5, 17, 493.394, -24.4781, 1000.68, 3.14442),
(15, 'Universitas', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 2792.8, -1087.6, 30.7188, 271.79, 7, 7, 1796.61, 1314.53, 1047.28, 0),
(22, 'Gedung Bintang', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 1570.44, -1337.45, 16.4844, 130.807, 0, 0, 1548.41, -1363.74, 326.218, 177.6),
(23, 'Ammunation Center', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 1368.8, -1279.86, 13.5469, 96.0912, 0, 7, 315.647, -143.663, 999.602, 358.704),
(25, 'Kantin', '', 19130, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 288.603, 1838.27, 7.72656, 357.048, 0, 0, 288.671, 1834.66, 8.07565, 180.614),
(26, 'Basement', '', 19197, 0, 0, 0, -1, 0, 1, -1, 0, 0, 0, 0, 1568.59, -1689.97, 6.21875, 177.857, 6, 6, 1484.32, -2885.13, 1586.5, 268.962),
(29, 'STAFF ONLY', '', 19130, 0, 0, 0, -1, 0, 0, -1, 0, 0, 1, 3, 973.109, 8.28099, 1001.15, 182.667, 1, 3, 1494.47, 1303.8, 1093.29, 0.034264),
(33, 'VVIP ROOM', '', 19130, 3, 0, 0, -1, 0, 0, -1, 0, 0, 1, 1, -789.498, 510.487, 1367.37, 181.348, 1, 3, 934.563, 8.20358, 1000.99, 181.931),
(16, 'Heliped Polisi', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 1524.48, -1677.85, 6.21875, 94.1611, 0, 0, 1564.98, -1666.92, 28.3956, 352.624),
(0, 'Rumah Sakit', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 2031.68, -1401.89, 17.2711, 178.063, 5, 5, 873.714, 702.618, 5005.04, 357.425),
(2, 'Penambang', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 696.704, 905.797, -38.6118, 113.705, 1, 10, 2541.68, 1623.12, -5.52354, 268.934),
(4, 'Dragon Casino', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 10, 1991.62, 1016.78, 994.891, 78.642, 0, 10, 2018.78, 1017.86, 996.875, 92.7579),
(11, 'THE VOLDIGOAD', '', 19197, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -2463.41, 131.686, 35.1719, 116.502, 0, 2, 1204.83, -13.852, 1000.92, 180.308),
(17, 'LANTAI 2 RS', '', 19197, 0, 0, 0, -1, 0, 3, -1, 0, 0, 0, 0, 2285.55, 591.31, 10.8705, 281.241, 0, 0, 2271.88, 592.178, 33.8294, 83.6506),
(18, 'STAFF ONLY', '', 19197, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 2350.97, -646.659, 128.062, 5.77424, 0, 3, -2634.29, 1409.9, 906.465, 275.453);

-- --------------------------------------------------------

--
-- Table structure for table `dropped`
--

CREATE TABLE `dropped` (
  `ID` int(11) NOT NULL,
  `itemName` varchar(32) DEFAULT '0',
  `itemModel` int(11) DEFAULT 0,
  `itemX` float DEFAULT NULL,
  `itemY` float DEFAULT NULL,
  `itemZ` float DEFAULT NULL,
  `itemInt` int(11) DEFAULT 0,
  `itemWorld` int(11) DEFAULT 0,
  `itemQuantity` int(11) DEFAULT 0,
  `itemPlayer` varchar(24) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `dynamic_rusun`
--

CREATE TABLE `dynamic_rusun` (
  `rID` int(11) NOT NULL,
  `RusunOwner` varchar(64) NOT NULL DEFAULT 'N/A',
  `RusunName` varchar(64) NOT NULL DEFAULT 'N/A',
  `RusunOwnerID` int(12) DEFAULT 0,
  `RusunPrice` int(12) DEFAULT 0,
  `RusunInterior` int(12) DEFAULT 0,
  `RusunExtInterior` int(12) DEFAULT 0,
  `RusunWorld` int(12) DEFAULT 0,
  `ExtPosX` float DEFAULT 0,
  `ExtPosY` float DEFAULT 0,
  `ExtPosZ` float DEFAULT 0,
  `ExtPosA` float DEFAULT 0,
  `IntPosX` float DEFAULT 0,
  `IntPosY` float DEFAULT 0,
  `IntPosZ` float DEFAULT 0,
  `IntPosA` float DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `dynamic_rusun`
--

INSERT INTO `dynamic_rusun` (`rID`, `RusunOwner`, `RusunName`, `RusunOwnerID`, `RusunPrice`, `RusunInterior`, `RusunExtInterior`, `RusunWorld`, `ExtPosX`, `ExtPosY`, `ExtPosZ`, `ExtPosA`, `IntPosX`, `IntPosY`, `IntPosZ`, `IntPosA`) VALUES
(0, 'N/A', 'Epep', 0, 1, 5, 0, 0, 2233.21, -1165.92, 25.8906, 286.565, 2233.73, -1115.19, 1050.88, 0.1506),
(1, 'N/A', 'Rusun', 0, 100000, 5, 0, 0, 2233.2, -1170.79, 25.8906, 264.413, 2233.73, -1115.19, 1050.88, 0.1506),
(2, 'N/A', 'ruyun pok aslton', 0, 30000, 5, 0, 0, 2228.64, -1180.6, 25.8906, 171.053, 2233.73, -1115.19, 1050.88, 0.1506),
(3, 'N/A', 'ruyun pok aslton', 0, 30000, 5, 0, 0, 2223.76, -1180.6, 25.8906, 180.867, 2233.73, -1115.19, 1050.88, 0.1506),
(4, 'N/A', 'MPOK ALSTON', 0, 100000, 5, 0, 0, 2233.21, -1176.26, 25.8972, 272.348, 2233.73, -1115.19, 1050.88, 0.1506),
(5, 'N/A', 'MPOK ALSTON', 0, 100000, 5, 0, 0, 2218.62, -1180.6, 25.8906, 182.07, 2233.73, -1115.19, 1050.88, 0.1506),
(6, 'N/A', 'MPOK ALSTON', 0, 100000, 5, 0, 0, 2213.72, -1180.6, 25.8906, 170.414, 2233.73, -1115.19, 1050.88, 0.1506),
(7, 'N/A', 'MPOK ALSTON', 0, 100000, 5, 0, 0, 2209.73, -1180.6, 25.8906, 181.017, 2233.73, -1115.19, 1050.88, 0.1506),
(8, 'N/A', 'MPOK ALSTON', 0, 100000, 5, 0, 0, 2204.98, -1180.6, 25.8906, 170.489, 2233.73, -1115.19, 1050.88, 0.1506),
(9, 'N/A', 'MPOK ALSTON', 0, 100000, 5, 0, 0, 2201.29, -1177.79, 25.8876, 95.5139, 2233.73, -1115.19, 1050.88, 0.1506);

-- --------------------------------------------------------

--
-- Table structure for table `emergencylog`
--

CREATE TABLE `emergencylog` (
  `ID` int(11) NOT NULL DEFAULT 0,
  `pID` int(11) NOT NULL,
  `Name` varchar(32) DEFAULT '',
  `Phone` varchar(64) DEFAULT '',
  `Date` int(11) DEFAULT 0,
  `Location` varchar(64) DEFAULT '',
  `Description` varchar(128) DEFAULT ''
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `ems_brankas`
--

CREATE TABLE `ems_brankas` (
  `PID` int(11) DEFAULT 0,
  `ID` int(11) NOT NULL,
  `Item` varchar(64) NOT NULL DEFAULT '-',
  `Model` int(11) DEFAULT 0,
  `Quantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `ems_brankas`
--

INSERT INTO `ems_brankas` (`PID`, `ID`, `Item`, `Model`, `Quantity`) VALUES
(0, 49, 'Medkit', 11738, 9230),
(0, 55, 'Alprazolam', 1241, 6611),
(0, 61, 'Bandage', 11736, 10670),
(0, 67, 'Smartphone', 18870, 244),
(0, 74, 'Radio', 19942, 118);

-- --------------------------------------------------------

--
-- Table structure for table `factiongarage`
--

CREATE TABLE `factiongarage` (
  `ID` int(11) NOT NULL,
  `Name` varchar(258) NOT NULL DEFAULT 'None',
  `Type` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `PosX` float NOT NULL DEFAULT 0,
  `PosY` float NOT NULL DEFAULT 0,
  `PosZ` float NOT NULL DEFAULT 0,
  `SpawnX` float NOT NULL DEFAULT 0,
  `SpawnY` float NOT NULL DEFAULT 0,
  `SpawnZ` float NOT NULL DEFAULT 0,
  `SpawnA` float NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `factionlogs`
--

CREATE TABLE `factionlogs` (
  `Name` varchar(64) DEFAULT 'N/A',
  `UCP` varchar(64) DEFAULT 'N/A',
  `Value` int(11) DEFAULT 0,
  `Faction` varchar(64) DEFAULT 'N/A',
  `Time` varchar(64) DEFAULT 'N/A'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `families`
--

CREATE TABLE `families` (
  `F_ID` int(11) NOT NULL DEFAULT -1,
  `F_Name` varchar(50) DEFAULT 'N/A',
  `F_Leader` varchar(50) DEFAULT 'N/A',
  `F_Money` int(11) DEFAULT 0,
  `F_Icon` int(11) DEFAULT 0,
  `F_BrankasX` float DEFAULT 0,
  `F_BrankasY` float DEFAULT 0,
  `F_BrankasZ` float DEFAULT 0,
  `F_BosDeskX` float DEFAULT 0,
  `F_BosDeskY` float DEFAULT 0,
  `F_BosDeskZ` float DEFAULT 0,
  `F_ExtPosX` float DEFAULT 0,
  `F_ExtPosY` float DEFAULT 0,
  `F_ExtPosZ` float DEFAULT 0,
  `F_ExtPosA` float DEFAULT 0,
  `F_IntPosX` float DEFAULT 0,
  `F_IntPosY` float DEFAULT 0,
  `F_IntPosZ` float DEFAULT 0,
  `F_IntPosA` float DEFAULT 0,
  `F_Interior` int(11) DEFAULT 0,
  `F_Weapon1` int(11) DEFAULT 0,
  `F_Weapon2` int(11) DEFAULT 0,
  `F_Weapon3` int(11) DEFAULT 0,
  `F_Weapon4` int(11) DEFAULT 0,
  `F_Weapon5` int(11) DEFAULT 0,
  `F_Ammo1` int(11) DEFAULT 0,
  `F_Ammo2` int(11) DEFAULT 0,
  `F_Ammo3` int(11) DEFAULT 0,
  `F_Ammo4` int(11) DEFAULT 0,
  `F_Ammo5` int(11) DEFAULT 0,
  `F_RedMoney` int(11) DEFAULT 0,
  `F_GarageX` float DEFAULT 0,
  `F_GarageY` float DEFAULT 0,
  `F_GarageZ` float DEFAULT 0,
  `F_GarageSpawnX` float DEFAULT 0,
  `F_GarageSpawnY` float DEFAULT 0,
  `F_GarageSpawnZ` float DEFAULT 0,
  `F_GarageSpawnA` float DEFAULT 0,
  `F_GarageWorld` int(11) DEFAULT 0,
  `F_GarageInterior` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `familieslogs`
--

CREATE TABLE `familieslogs` (
  `Name` varchar(64) DEFAULT NULL,
  `UCP` varchar(64) DEFAULT NULL,
  `Activity` varchar(320) DEFAULT NULL,
  `Families` varchar(100) DEFAULT NULL,
  `Time` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `families_garage`
--

CREATE TABLE `families_garage` (
  `ID` int(11) NOT NULL DEFAULT 0,
  `gFamiliesID` int(11) NOT NULL DEFAULT 0,
  `gFamiliesName` varchar(64) NOT NULL DEFAULT 'N/A',
  `gFamiliesPOSX` float NOT NULL DEFAULT 0,
  `gFamiliesPOSY` float NOT NULL DEFAULT 0,
  `gFamiliesPOSZ` float NOT NULL DEFAULT 0,
  `gFamiliesSpawnX` float NOT NULL DEFAULT 0,
  `gFamiliesSpawnY` float NOT NULL DEFAULT 0,
  `gFamiliesSpawnZ` float NOT NULL DEFAULT 0,
  `gFamiliesSpawnA` float NOT NULL DEFAULT 0,
  `gFamiliesInterior` int(11) NOT NULL DEFAULT -1,
  `gFamiliesWorld` int(11) NOT NULL DEFAULT -1,
  `gFamiliesPickup` int(11) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `gate`
--

CREATE TABLE `gate` (
  `ID` int(11) NOT NULL,
  `Model` int(11) DEFAULT 0,
  `Faction` int(11) DEFAULT 0,
  `Family` int(11) DEFAULT -1,
  `House` int(11) DEFAULT -1,
  `Owner` int(11) DEFAULT -1,
  `Speed` float DEFAULT 0,
  `cX` float DEFAULT 0,
  `cY` float DEFAULT 0,
  `cZ` float DEFAULT 0,
  `cRX` float DEFAULT 0,
  `cRY` float DEFAULT 0,
  `cRZ` float DEFAULT 0,
  `oX` float DEFAULT 0,
  `oY` float DEFAULT 0,
  `oZ` float DEFAULT 0,
  `oRX` float DEFAULT 0,
  `oRY` float DEFAULT 0,
  `oRZ` float DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `gate`
--

INSERT INTO `gate` (`ID`, `Model`, `Faction`, `Family`, `House`, `Owner`, `Speed`, `cX`, `cY`, `cZ`, `cRX`, `cRY`, `cRZ`, `oX`, `oY`, `oZ`, `oRX`, `oRY`, `oRZ`) VALUES
(0, 985, 0, -1, -1, 5, 2, 325.652, -1184.74, 75.6191, 0, 0, 38.8, 321.268, -1188.43, 75.5991, 0, 0, 38.2),
(1, 980, 0, 2, -1, -1, 2, 2497.38, 2778.99, 12.5377, 0, 0, 89.6999, 2497.42, 2786.66, 12.5377, 0, 0, 89.6999),
(2, 980, 0, -1, -1, -1, 2, 2346.05, -873.784, 116.004, 0, 0, 6.9, 2346.05, -873.784, 110.124, 0, 0, 6.9),
(3, 980, 0, 2, -1, -1, 2, 2497.28, 2767.53, 12.5446, 0, 0, -90.4999, 2497.24, 2759.56, 12.5446, 0, 0, -90.2999),
(5, 980, 5, -1, -1, -1, 2, -86.256, 1058, 21.2686, 0, 0, 89.7, -86.256, 1058, 16.4285, 0, 0, 89.7),
(6, 980, 5, -1, -1, -1, 2, -80.3307, 1022.42, 20.4852, 0, 0, 0, -80.3307, 1022.42, 16.3852, 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `gudang`
--

CREATE TABLE `gudang` (
  `GudangID` int(11) NOT NULL,
  `GudangName` varchar(64) DEFAULT '-',
  `GudangPrice` int(11) DEFAULT 0,
  `GudangX` float DEFAULT 0,
  `GudangY` float DEFAULT 0,
  `GudangZ` float DEFAULT 0,
  `GudangInterior` int(11) DEFAULT NULL,
  `GudangWorld` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `gudang`
--

INSERT INTO `gudang` (`GudangID`, `GudangName`, `GudangPrice`, `GudangX`, `GudangY`, `GudangZ`, `GudangInterior`, `GudangWorld`) VALUES
(0, 'GUDANG LV', 25000, -134.588, 1116.27, 20.1966, 0, 0),
(1, '1', 1, 2247.96, -1982.79, 13.5469, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `house`
--

CREATE TABLE `house` (
  `ID` int(11) NOT NULL,
  `HS_Owner` varchar(50) NOT NULL DEFAULT '-',
  `HS_OwnerID` int(11) DEFAULT -1,
  `HS_Type` int(11) DEFAULT 0,
  `HS_Claimed` int(11) DEFAULT 0,
  `HS_ExtPosX` float DEFAULT 0,
  `HS_ExtPosY` float DEFAULT 0,
  `HS_ExtPosZ` float DEFAULT 0,
  `HS_ExtPosA` float DEFAULT 0,
  `HS_IntPosX` float DEFAULT 0,
  `HS_IntPosY` float DEFAULT 0,
  `HS_IntPosZ` float DEFAULT 0,
  `HS_IntPosA` float DEFAULT 0,
  `HS_Capacity` float DEFAULT 0,
  `HS_Interior` int(11) DEFAULT 0,
  `HS_Weapon1` int(11) DEFAULT 0,
  `HS_Weapon2` int(11) DEFAULT 0,
  `HS_Weapon3` int(11) DEFAULT 0,
  `HS_Weapon4` int(11) DEFAULT 0,
  `HS_Weapon5` int(11) DEFAULT 0,
  `HS_Ammo1` int(11) DEFAULT 0,
  `HS_Ammo2` int(11) DEFAULT 0,
  `HS_Ammo3` int(11) DEFAULT 0,
  `HS_Ammo4` int(11) DEFAULT 0,
  `HS_Ammo5` int(11) DEFAULT 0,
  `HS_GarageX` float DEFAULT 0,
  `HS_GarageY` float DEFAULT 0,
  `HS_GarageZ` float DEFAULT 0,
  `HS_GarageSpawnX` float DEFAULT 0,
  `HS_GarageSpawnY` float DEFAULT 0,
  `HS_GarageSpawnZ` float DEFAULT 0,
  `HS_GarageSpawnA` float DEFAULT 0,
  `HS_GarageInterior` int(11) DEFAULT 0,
  `HS_GarageWorld` int(11) DEFAULT 0,
  `HS_HelipadX` float DEFAULT 0,
  `HS_HelipadY` float DEFAULT 0,
  `HS_HelipadZ` float DEFAULT 0,
  `HS_HelipadSpawnX` float DEFAULT 0,
  `HS_HelipadSpawnY` float DEFAULT 0,
  `HS_HelipadSpawnZ` float DEFAULT 0,
  `HS_HelipadSpawnA` float DEFAULT 0,
  `HS_HelipadInterior` int(11) DEFAULT 0,
  `HS_HelipadWorld` int(11) DEFAULT 0,
  `HS_BrankasX` float DEFAULT 0,
  `HS_BrankasY` float DEFAULT 0,
  `HS_BrankasZ` float DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `house`
--

INSERT INTO `house` (`ID`, `HS_Owner`, `HS_OwnerID`, `HS_Type`, `HS_Claimed`, `HS_ExtPosX`, `HS_ExtPosY`, `HS_ExtPosZ`, `HS_ExtPosA`, `HS_IntPosX`, `HS_IntPosY`, `HS_IntPosZ`, `HS_IntPosA`, `HS_Capacity`, `HS_Interior`, `HS_Weapon1`, `HS_Weapon2`, `HS_Weapon3`, `HS_Weapon4`, `HS_Weapon5`, `HS_Ammo1`, `HS_Ammo2`, `HS_Ammo3`, `HS_Ammo4`, `HS_Ammo5`, `HS_GarageX`, `HS_GarageY`, `HS_GarageZ`, `HS_GarageSpawnX`, `HS_GarageSpawnY`, `HS_GarageSpawnZ`, `HS_GarageSpawnA`, `HS_GarageInterior`, `HS_GarageWorld`, `HS_HelipadX`, `HS_HelipadY`, `HS_HelipadZ`, `HS_HelipadSpawnX`, `HS_HelipadSpawnY`, `HS_HelipadSpawnZ`, `HS_HelipadSpawnA`, `HS_HelipadInterior`, `HS_HelipadWorld`, `HS_BrankasX`, `HS_BrankasY`, `HS_BrankasZ`) VALUES
(0, 'Mile_West', 369, 1, 0, 2011.58, 695.188, 11.4609, 341.974, 1019.26, -1849.4, -34.0859, 178.366, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(1, 'Steven_Nakasima', 2361, 3, 1, 2495.29, -1691.14, 14.7656, 183.803, 1155.86, -1651.19, -26.7109, 358.986, 941.4, 3, 31, 25, 24, 0, 0, 8000, 7920, 10749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1152.03, -1633.84, -26.4713),
(2, 'Kei_Good', 1672, 1, 1, 980.429, -677.3, 121.976, 218.204, 1019.26, -1849.4, -34.0859, 178.366, 5.92, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1009.18, -660.137, 121.145, 1006.27, -654.406, 121.148, 26.9169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1025.48, -1850.07, -34.08),
(3, 'Udin_Cantarrez', 1013, 1, 1, 822.473, -1505.26, 14.3947, 175.952, 1019.26, -1849.4, -34.0859, 178.366, 2.45, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1025.55, -1850.07, -34.08),
(4, 'Nitto_Sander', 2481, 1, 1, 657.229, -1652.65, 15.4062, 267.727, 1019.26, -1849.4, -34.0859, 178.366, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1025.46, -1850.07, -34.08),
(5, 'Hanam_Verelly', 2482, 1, 1, 813.694, -1456.6, 14.2242, 265.413, 1019.26, -1849.4, -34.0859, 178.366, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1025.52, -1850.07, -34.08),
(6, 'Vall_Ainsley', 2035, 1, 1, 685.602, -1421.91, 14.7747, 183.95, 1019.26, -1849.4, -34.0859, 178.366, 0.134999, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1025.5, -1850.07, -34.08),
(7, 'Ebel_Lobel', 2485, 1, 1, 2018.05, -1629.91, 14.0426, 269.735, 1019.26, -1849.4, -34.0859, 178.366, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(8, 'Tony_Aldy', 2487, 1, 1, 2016.54, -1641.58, 14.1129, 262.553, 1019.26, -1849.4, -34.0859, 178.366, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1025.58, -1850.07, -34.08),
(9, 'Taro_Yamato', 1941, 1, 1, 1969.31, -1705.14, 15.9688, 4.06081, 1019.26, -1849.4, -34.0859, 178.366, 2.02, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1025.52, -1850.07, -34.08);

-- --------------------------------------------------------

--
-- Table structure for table `house_garkot`
--

CREATE TABLE `house_garkot` (
  `id` int(11) NOT NULL DEFAULT 0,
  `GHouseID` int(11) NOT NULL DEFAULT -1,
  `posx` float NOT NULL DEFAULT 0,
  `posy` float NOT NULL DEFAULT 0,
  `posz` float NOT NULL DEFAULT 0,
  `spawnx` float NOT NULL DEFAULT 0,
  `spawny` float NOT NULL DEFAULT 0,
  `spawnz` float NOT NULL DEFAULT 0,
  `spawna` float NOT NULL DEFAULT 0,
  `interior` float NOT NULL DEFAULT 0,
  `world` float NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `hunting`
--

CREATE TABLE `hunting` (
  `DeerID` int(11) NOT NULL DEFAULT -1,
  `DeerX` float DEFAULT 0,
  `DeerY` float DEFAULT 0,
  `DeerZ` float DEFAULT 0,
  `DeerRX` float DEFAULT 0,
  `DeerRY` float DEFAULT 0,
  `DeerRZ` float DEFAULT 0,
  `DeerInterior` int(11) DEFAULT NULL,
  `DeerWorld` int(11) DEFAULT NULL,
  `DeerTime` int(11) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `hunting`
--

INSERT INTO `hunting` (`DeerID`, `DeerX`, `DeerY`, `DeerZ`, `DeerRX`, `DeerRY`, `DeerRZ`, `DeerInterior`, `DeerWorld`, `DeerTime`) VALUES
(1, -586, -2263, 25, 0, 0, 0, 0, 0, 0),
(0, -546.081, -2237, 31.4628, 0, -10, 0, 0, 0, 0),
(2, -588, -2290, 26.76, 0, 0, 0, 0, 0, 0),
(3, -590, -2351, 27, 0, 0, 0, 0, 0, 0),
(4, -583, -2383, 28, 0, -13, -34, 0, 0, 0),
(5, -609, -2392, 27, 0, 0, 0, 0, 0, 0),
(6, -564.351, -2400, 45.8716, 0, -22, 0, 0, 0, 0),
(7, -525, -2365, 51, 0, -22, 0, 0, 0, 0),
(8, -520, -2345, 49, -5, -23, -2, 0, 0, 0),
(9, -495.754, -2251.64, 37.921, 0, 8.3, -172.9, 0, 0, 0),
(10, -500.922, -2199.1, 53.6064, 0, 12, -53, 0, 0, 0),
(11, -533.003, -2208.06, 42.526, 0, 7, -93, 0, 0, 0),
(12, -531.923, -2279.91, 30.8913, 0, -8, -128, 0, 0, 0),
(13, -611, -2311, 29, 0, 6, 0, 0, 0, 0),
(14, -620, -2289, 26, 7, -2, 150, 0, 0, 0),
(15, -618.978, -2262, 24.6396, 2, 0, 101, 0, 0, 0),
(16, -639, -2312, 35, 0, -1, 11, 0, 0, 0),
(17, -567, -2320, 27, 3, -7, 75, 0, 0, 0),
(18, -507.057, -2292.01, 33.4867, 3, 6, -146, 0, 0, 0),
(19, -610, -2233, 24, 0, 2, -177, 0, 0, 0),
(20, -653.051, -2277.94, 27.9265, 0, 5, 130, 0, 0, 0),
(21, -666, -2306, 32.17, 0, 0, -85, 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `iconmaps`
--

CREATE TABLE `iconmaps` (
  `ID` int(11) NOT NULL,
  `IconID` int(11) DEFAULT -1,
  `IconInterior` int(11) DEFAULT -1,
  `IconWorld` int(11) DEFAULT -1,
  `IconX` float DEFAULT 0,
  `IconY` float DEFAULT 0,
  `IconZ` float DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `iconmaps`
--

INSERT INTO `iconmaps` (`ID`, `IconID`, `IconInterior`, `IconWorld`, `IconX`, `IconY`, `IconZ`) VALUES
(0, 32, 0, 0, 2164.17, -1801.37, 13.376),
(1, 32, 0, 0, 2216.46, -1167.53, 25.7266),
(2, 5, 0, 0, 1687.78, -2292.09, -1.2281),
(3, 32, 0, 0, 184.959, -108.066, 2.02344),
(4, 32, 0, 0, -3.62687, 1220.92, 19.3527),
(5, 32, 0, 0, 2628.12, 738.582, 10.8203),
(6, 25, 0, 0, 1967.45, 1623.21, 12.8621),
(7, 25, 0, 0, 2196.79, 1677.22, 12.4672),
(8, 25, 0, 0, 2238.91, 1285.6, 10.9203),
(9, 40, 0, 0, 2847.95, -2067, 10.7737),
(10, 40, 0, 0, 3434.93, -2066.57, 15.5637),
(11, 54, 0, 0, 659.632, -1866.91, 5.46094);

-- --------------------------------------------------------

--
-- Table structure for table `icons`
--

CREATE TABLE `icons` (
  `iconID` int(11) NOT NULL,
  `iconLocationX` float DEFAULT 0,
  `iconLocationY` float DEFAULT 0,
  `iconLocationZ` float DEFAULT 0,
  `iconInterior` int(11) DEFAULT NULL,
  `iconWorld` int(11) DEFAULT NULL,
  `iconType` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `icons`
--

INSERT INTO `icons` (`iconID`, `iconLocationX`, `iconLocationY`, `iconLocationZ`, `iconInterior`, `iconWorld`, `iconType`) VALUES
(0, 2164.17, -1801.37, 13.376, 0, 0, 32),
(1, 2216.46, -1167.53, 25.7266, 0, 0, 32),
(2, 1687.78, -2292.09, -1.2281, 0, 0, 5),
(3, 184.959, -108.066, 2.02344, 0, 0, 32),
(4, -3.62687, 1220.92, 19.3527, 0, 0, 32),
(5, 2628.12, 738.582, 10.8203, 0, 0, 32),
(6, 1967.45, 1623.21, 12.8621, 0, 0, 25),
(7, 2196.79, 1677.22, 12.4672, 0, 0, 25),
(8, 2238.91, 1285.6, 10.9203, 0, 0, 25),
(9, 2847.95, -2067, 10.7737, 0, 0, 40),
(10, 3434.93, -2066.57, 15.5637, 0, 0, 40),
(11, 659.632, -1866.91, 5.46094, 0, 0, 54),
(12, 2194.16, -999.307, 63.2494, 0, 0, 48),
(13, 2027.46, 1008.67, 10.8203, 0, 0, 49),
(14, 2182.78, -1986.65, 13.5503, 0, 0, 1);

-- --------------------------------------------------------

--
-- Table structure for table `inventory`
--

CREATE TABLE `inventory` (
  `ID` int(11) DEFAULT 0,
  `invID` int(11) NOT NULL,
  `invItem` varchar(32) DEFAULT NULL,
  `invModel` int(11) DEFAULT 0,
  `invQuantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `inventory`
--

INSERT INTO `inventory` (`ID`, `invID`, `invItem`, `invModel`, `invQuantity`) VALUES
(1, 3, 'Nasi Goreng', 2355, 10),
(1, 4, 'Es Teh', 1546, 10),
(2, 5, 'Backpack', 3026, 1),
(1, 6, 'Smartphone', 18870, 1),
(3, 7, 'Backpack', 3026, 1);

-- --------------------------------------------------------

--
-- Table structure for table `invoices`
--

CREATE TABLE `invoices` (
  `invoiceID` int(11) NOT NULL,
  `Name` varchar(320) DEFAULT 'N/A',
  `Sender` int(11) DEFAULT -1,
  `Faction` int(11) DEFAULT 0,
  `Cost` int(11) DEFAULT 0,
  `Owner` int(11) DEFAULT -1
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `label_fivem`
--

CREATE TABLE `label_fivem` (
  `LabelID` int(11) NOT NULL,
  `LabelText` varchar(128) NOT NULL DEFAULT '-',
  `LabelX` float DEFAULT 0,
  `LabelY` float DEFAULT 0,
  `LabelZ` float DEFAULT 0,
  `LabelRX` float DEFAULT 0,
  `LabelRY` float DEFAULT 0,
  `LabelRZ` float DEFAULT 0,
  `LabelInterior` int(11) DEFAULT -1,
  `LabelWorld` int(11) DEFAULT -1
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `label_fivem`
--

INSERT INTO `label_fivem` (`LabelID`, `LabelText`, `LabelX`, `LabelY`, `LabelZ`, `LabelRX`, `LabelRY`, `LabelRZ`, `LabelInterior`, `LabelWorld`) VALUES
(0, '{FFFF00}Garasi Umum', 2425.67, -1234.03, 24.68, 0, 0, 48.5541, 0, 0),
(1, '{FFFF00}Garasi Umum', 1275.21, -2038.63, 59.0401, 0, 0, 105.545, 0, 0),
(2, '{FFFF00}Garasi Umum', 2861.93, -1950.65, 10.9376, 0, 0, 105.545, 0, 0),
(3, '{FFFF00}Garasi Umum', 128.333, -273.537, 1.57812, 0, 0, 105.545, 0, 0),
(4, '{FFFF00}Garasi Umum', 1929, -1808.24, 13.6052, 0, 0, 105.545, 0, 0),
(5, '{FFFF00}Garasi Umum', 2797.95, -2421.65, 13.685, 0, 0, 105.545, 0, 0),
(6, '{FFFF00}Garasi Umum', 1508.49, -2350.49, 13.5469, 0, 0, 105.545, 0, 0),
(7, '{FFFF00}GUNAKAN /SV BERBISIK', 1257.86, -1287.49, 1061.15, 0, 0, 2.25854, 0, 0),
(8, '{FFFF00}TONGKRONGAN ORANG SAMBAT', -2125.43, -411.173, 35.3359, 0, 0, 158.042, 0, 0),
(9, '{FFFF00}Garasi Umum', 900.031, -1172.92, 16.9766, 0, 0, 105.545, 0, 0),
(10, '{FFC0CB}GARASI BANDARA LS', 1560.04, -2244.42, 13.5441, 0, 0, 230.353, 0, 0),
(11, '{FFFF00}Garasi Umum', -520.715, -68.8575, 62.3895, 0, 0, 105.545, 0, 0),
(12, '{FFFF00}Garasi Umum', -1722.3, 79.9458, 3.54956, 0, 0, 105.545, 0, 0),
(13, '{FFFF00}Garasi Umum', 638.43, 890.145, -42.9534, 0, 0, 105.545, 0, 0),
(14, '{FFFF00}Garasi Umum', 3498, -2177.83, 16.0308, 0, 0, 105.545, 0, 0),
(15, '{FFFF00}Garasi Umum', 1549.3, 25.9362, 24.1406, 0, 0, 105.545, 0, 0),
(16, '{FFFF00}Garasi Umum', 1912.22, 175.89, 37.2775, 0, 0, 105.545, 0, 0),
(17, '{FFC0CB}GARASI BALAI KOTA LS', 1434.56, -1769.48, 13.5469, 0, 0, 155.467, 0, 0),
(18, '{FFC0CB}3 GARASI PEDAGANG', 528.994, -1788.23, 5.92303, 0, 0, 30.34, 0, 0),
(19, '{FFFF00}MAX PETROL 100', 486.406, 1300.94, 10.0656, 0, 0, 180.798, 0, 0),
(20, '{FFFF00}MAX PETROL 100', 490.226, 1294.84, 10.0656, 0, 0, 272.346, 0, 0),
(21, '{FFFF00}MAX GAS 100', 281.762, 1340.88, 11.8371, 0, 0, 94.7752, 0, 0),
(22, '{FFFF00}MAX PUREOIL 100', 485.842, 1534.14, 1.86507, 0, 0, 89.9134, 0, 0),
(23, '{FFFF00}Garasi Umum', 1107.57, -1218.14, 17.8047, 0, 0, 87.4698, 0, 0),
(24, '{FFFF00}Garasi Umum', 367.679, -2042.9, 7.67188, 0, 0, 92.4359, 0, 0),
(25, '{FFFF00}TEMPAT SANTAI', 380.798, -2034.55, 7.83594, 0, 0, 180.071, 0, 0),
(26, '{FFC0CB}GARASI VENUE', 826.758, -1984.34, 12.8672, 0, 0, 75.3605, 0, 0),
(27, '{FFC0CB}ALT BERANGKAS', 2527.58, 2364.69, 4.22688, 0, 0, 1.16113, 0, 0),
(28, '{FFC0CB}GARASI KANPOL', 1290.24, 343.063, 19.5547, 0, 0, 70.5985, 0, 0),
(29, '{FFC0CB}GARASI UMUM', -82.5803, 1079.73, 19.7422, 0, 0, 256.496, 0, 0),
(30, '{FFC0CB}GarasIUmum', 2774.63, -2427.2, 13.7209, 0, 0, 196.223, 0, 0),
(31, '{FFC0CB}HELIPAD GARASI', 2324.23, -904.259, 108.875, 0, 0, 190.929, 0, 0),
(32, '{FFC0CB}ON DUTY', 2252.42, 578.752, 10.8705, 0, 0, 109.291, 0, 0),
(33, '{FFC0CB}BERANKAS SAMD', 2260.92, 573.675, 10.8705, 0, 0, 181.884, 0, 0),
(34, '{FFC0CB}GARASI PD', 1573.51, -1640.45, 13.4889, 0, 0, 165.627, 0, 0),
(35, '{FFC0CB}GARASI SAMD', 2308.06, 610.539, 10.8603, 0, 0, 21.6088, 0, 0),
(36, '{FFC0CB}BAJU SAMD', 2252, 581.594, 10.8705, 0, 0, 101.146, 0, 0),
(37, '{FFC0CB}STORAGE SAMD', 2265.99, 579.836, 10.8705, 0, 0, 327.614, 0, 0),
(38, '{FFC0CB}GARAGE HOUSE', 1107.59, -724.158, 101.003, 0, 0, 18.8179, 0, 0),
(39, '{FFC0CB}MARKAS ADMIN', 2355.34, -658.058, 128.055, 0, 0, 97.3384, 0, 0),
(40, '{FFC0CB}GARASI UMUM', 1179.95, -926.266, 43.4291, 0, 0, 355.213, 0, 0),
(41, '{FFC0CB}ALT KUSUS WAKIL KETUA', 2527.61, 2368.57, 4.22688, 0, 0, 65.1532, 0, 0),
(42, '{FFC0CB}IMPOUND', 1579.4, -1630.88, 13.3828, 0, 0, 187.184, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `ladang`
--

CREATE TABLE `ladang` (
  `id` int(11) NOT NULL,
  `kanabisX` float DEFAULT NULL,
  `kanabisY` float DEFAULT NULL,
  `kanabisZ` float DEFAULT NULL,
  `kanabisRX` float DEFAULT NULL,
  `kanabisRY` float DEFAULT NULL,
  `kanabisRZ` float DEFAULT NULL,
  `interior` int(11) DEFAULT 0,
  `world` int(11) DEFAULT 0,
  `kanabisTimer` int(11) DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `ladang`
--

INSERT INTO `ladang` (`id`, `kanabisX`, `kanabisY`, `kanabisZ`, `kanabisRX`, `kanabisRY`, `kanabisRZ`, `interior`, `world`, `kanabisTimer`) VALUES
(4, 2177.15, -575.052, 125.257, 12.5, 0, 0, 0, 0, 0),
(5, 2186.14, -578.861, 124.123, 0, 0, 0, 0, 0, 0),
(6, 2188.55, -571.977, 123.265, 0, 0, 0, 0, 0, 0),
(7, 2187.9, -565.598, 123.049, 8.8, 0, 0, 0, 0, 0),
(8, 2190.05, -556.467, 122.17, 0, 0, 0, 0, 0, 0),
(9, 2196.78, -545.446, 119.84, 0, 0, 0, 0, 0, 0),
(10, 2197.98, -531.778, 117.904, 0, -11.4, 0, 0, 0, 0),
(11, 2216.78, -533.687, 118.443, 0, 0, 0, 0, 0, 0),
(12, 2221.82, -550.424, 120.969, 0, 0, 0, 0, 0, 0),
(13, 2230.31, -566.071, 123.974, 0, -4.9, 0, 0, 0, 0),
(14, 2234.64, -558.299, 123.719, 0, 0, 0, 0, 0, 0),
(15, 2237.45, -543.548, 122.263, 0, 0, 0, 0, 0, 0),
(3, 2180.11, -565.491, 124.283, 0, 10, 0, 0, 0, 0),
(2, 2168.37, -552.886, 125.484, 0, 0, 0, 0, 0, 0),
(1, 2174.11, -561.063, 124.954, 0.199999, 0, 0, 0, 0, 0),
(0, 2178.1, -547.519, 123.421, 5.1, 0, 0, 0, 0, 0),
(16, 2249.5, -540.455, 123.507, -6.4, 0, 0, 0, 0, 0),
(17, 2248.7, -549.716, 124.42, -8.6, 0, 0, 0, 0, 0),
(18, 2246.42, -560.242, 125.38, 0, -6.7, 0, 0, 0, 0),
(19, 2244.11, -575.324, 126.578, 0, 0, 0, 0, 0, 0),
(20, 2251.25, -569.557, 127.073, 0, 0, 0, 0, 0, 0),
(21, 2174.58, -571.205, 125.177, 0, 0, 0, 0, 0, 0),
(22, 2165.18, -561.674, 126.443, 0, 0, 0, 0, 0, 0),
(23, 2184.72, -562.376, 123.157, 0, 0, 0, 0, 0, 0),
(24, -1096.19, -1084.26, 128.399, 0, 0, 0, 0, 0, 0),
(25, -1093.85, -1084.23, 128.369, 0, 0, 0, 0, 0, 0),
(26, -1090.75, -1084.28, 128.269, 0, 0, 0, 0, 0, 0),
(27, -1088.1, -1084.27, 128.359, 0, 0, 0, 0, 0, 0),
(28, -1085.49, -1084.27, 128.279, 0, 0, 0, 0, 0, 0),
(29, -1083.44, -1084.38, 128.309, 0, 0, 0, 0, 0, 0),
(30, -1079.85, -1084.38, 128.349, 0, 0, 0, 0, 0, 0),
(31, -1076.99, -1084.27, 128.129, 0, 0, 0, 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `loglogin`
--

CREATE TABLE `loglogin` (
  `no` int(11) NOT NULL,
  `username` varchar(40) NOT NULL DEFAULT 'None',
  `reg_id` int(11) NOT NULL DEFAULT 0,
  `password` varchar(40) NOT NULL DEFAULT 'None',
  `time` varchar(40) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `logpay`
--

CREATE TABLE `logpay` (
  `player` varchar(40) NOT NULL DEFAULT 'None',
  `playerid` int(11) NOT NULL DEFAULT 0,
  `toplayer` varchar(40) NOT NULL DEFAULT 'None',
  `toplayerid` int(11) NOT NULL DEFAULT 0,
  `ammount` int(11) NOT NULL DEFAULT 0,
  `time` bigint(20) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `lumbung`
--

CREATE TABLE `lumbung` (
  `id` int(11) NOT NULL DEFAULT 0,
  `stock` int(11) NOT NULL DEFAULT 100
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `lumbung`
--

INSERT INTO `lumbung` (`id`, `stock`) VALUES
(0, 1046);

-- --------------------------------------------------------

--
-- Table structure for table `objects`
--

CREATE TABLE `objects` (
  `ID` int(11) NOT NULL,
  `Model` int(11) DEFAULT NULL,
  `ObjectX` float DEFAULT NULL,
  `ObjectY` float DEFAULT NULL,
  `ObjectZ` float DEFAULT NULL,
  `ObjectRX` float DEFAULT NULL,
  `ObjectRY` float DEFAULT NULL,
  `ObjectRZ` float DEFAULT NULL,
  `ObjectInterior` int(11) DEFAULT 0,
  `ObjectWorld` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `objects`
--

INSERT INTO `objects` (`ID`, `Model`, `ObjectX`, `ObjectY`, `ObjectZ`, `ObjectRX`, `ObjectRY`, `ObjectRZ`, `ObjectInterior`, `ObjectWorld`) VALUES
(0, 1723, 2358.31, -649.263, 127.046, 0, 0, 90.8, 0, 0),
(1, 1814, 2359.52, -647.794, 127.243, 0, 0, -88.9, 0, 0),
(2, 2725, 2362.56, -648.043, 127.434, 0, 0, 0, 0, 0),
(3, 19623, 2362.77, -647.979, 128.049, 0, 0, -84.6, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `objecttext`
--

CREATE TABLE `objecttext` (
  `ID` int(11) NOT NULL,
  `Text` varchar(128) NOT NULL DEFAULT 'Text',
  `PosX` float DEFAULT 0,
  `PosY` float DEFAULT 0,
  `PosZ` float DEFAULT 0,
  `posRX` float DEFAULT 0,
  `posRY` float DEFAULT 0,
  `posRZ` float DEFAULT 0,
  `Vw` int(11) DEFAULT 0,
  `Int` int(11) DEFAULT 0,
  `FontColor` int(11) DEFAULT -1,
  `BackColor` int(11) DEFAULT -1,
  `FontSize` int(11) DEFAULT 100,
  `FontNames` varchar(24) NOT NULL DEFAULT 'Arial',
  `Model` int(11) DEFAULT 18244
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `pasar`
--

CREATE TABLE `pasar` (
  `id` int(11) NOT NULL,
  `posx` float DEFAULT 0,
  `posy` float DEFAULT 0,
  `posz` float DEFAULT 0,
  `type` int(11) DEFAULT 0,
  `interior` int(11) DEFAULT 0,
  `world` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `pasar`
--

INSERT INTO `pasar` (`id`, `posx`, `posy`, `posz`, `type`, `interior`, `world`) VALUES
(0, 848.266, -1210.29, 16.9935, 7, 0, 0),
(1, 829.055, -1211.28, 16.9935, 5, 0, 0),
(2, 830.418, -1196.48, 16.9935, 2, 0, 0),
(3, 834.492, -1187.64, 16.9935, 4, 0, 0),
(4, 850.796, -1187.64, 16.9935, 1, 0, 0),
(5, 863.186, -1209.67, 16.9935, 3, 0, 0),
(6, 1929.94, -1776.33, 13.5469, 8, 0, 0),
(7, 850.889, -1200.91, 16.9935, 9, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `pemerintah_brankas`
--

CREATE TABLE `pemerintah_brankas` (
  `PID` int(11) DEFAULT 0,
  `ID` int(11) NOT NULL,
  `Item` varchar(64) NOT NULL DEFAULT '-',
  `Model` int(11) DEFAULT 0,
  `Quantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `pemerintah_brankas`
--

INSERT INTO `pemerintah_brankas` (`PID`, `ID`, `Item`, `Model`, `Quantity`) VALUES
(0, 3, 'Smartphone', 18870, 55),
(0, 8, 'Berlian', 19941, 2124991500);

-- --------------------------------------------------------

--
-- Table structure for table `playerlogs`
--

CREATE TABLE `playerlogs` (
  `Name` varchar(50) DEFAULT NULL,
  `UCP` varchar(50) DEFAULT NULL,
  `Activity` varchar(320) DEFAULT NULL,
  `Value` int(11) DEFAULT 0,
  `Time` varchar(320) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `playerucp`
--

CREATE TABLE `playerucp` (
  `ID` int(11) NOT NULL,
  `ucp` varchar(22) DEFAULT NULL,
  `verifycode` int(11) DEFAULT 0,
  `DiscordID` varchar(50) DEFAULT '',
  `password` varchar(64) DEFAULT '',
  `salt` varchar(16) DEFAULT '',
  `extrac` int(11) DEFAULT 0,
  `reedem` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `playerucp`
--

INSERT INTO `playerucp` (`ID`, `ucp`, `verifycode`, `DiscordID`, `password`, `salt`, `extrac`, `reedem`) VALUES
(2730, 'Chaxw', 12345, '1071043073406140516', '504E03FE801259FCFACF92F2AEB40197A33C3232E8CB4311BCF53AE14F090129', ':#K}w=fNkTpgi)bG', 0, 0),
(2732, 'ChaxwOne', 253397, '773537198871674881', '3C74815EFF8FB8BDA9638487261CE4EC20B5593F9ACACB6BD7C7316DA59F3DB2', '|%\'+?a0spM6QJ`qe', 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `player_bans`
--

CREATE TABLE `player_bans` (
  `id` int(10) UNSIGNED NOT NULL,
  `name` varchar(24) DEFAULT 'None',
  `ip` varchar(24) DEFAULT 'None',
  `longip` int(11) DEFAULT 0,
  `ban_expire` bigint(20) DEFAULT 0,
  `ban_date` bigint(20) DEFAULT 0,
  `last_activity_timestamp` bigint(20) DEFAULT 0,
  `admin` varchar(40) DEFAULT 'Server',
  `reason` varchar(128) DEFAULT 'None'
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `player_characters`
--

CREATE TABLE `player_characters` (
  `pID` int(10) UNSIGNED NOT NULL,
  `Char_RegisterDate` varchar(30) DEFAULT '',
  `Char_LastLogin` varchar(30) DEFAULT '',
  `Char_Name` varchar(24) DEFAULT '',
  `Char_AdminName` varchar(24) DEFAULT 'None',
  `Char_AdminRankName` varchar(64) DEFAULT 'NULL',
  `Char_AdminPoint` int(11) UNSIGNED DEFAULT 0,
  `Char_IP` varchar(24) DEFAULT '',
  `Char_OnlineTimer` int(10) UNSIGNED DEFAULT 0,
  `Char_TheStars` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_TheStarsTime` bigint(20) UNSIGNED DEFAULT 0,
  `Char_Admin` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_AdminToggle` tinyint(3) UNSIGNED DEFAULT 1,
  `Char_Spy` int(11) UNSIGNED DEFAULT 0,
  `Char_Level` int(10) UNSIGNED DEFAULT 1,
  `Char_LevelUp` int(10) UNSIGNED DEFAULT 0,
  `Char_Vip` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_VipTime` bigint(20) UNSIGNED DEFAULT 0,
  `Char_VipName` varchar(256) DEFAULT '-',
  `Char_ClaimSP` int(11) DEFAULT 0,
  `Char_Money` int(11) DEFAULT 0,
  `Char_RedMoney` int(11) DEFAULT 0,
  `Char_BankMoney` int(11) DEFAULT 0,
  `Char_Gopay` int(11) DEFAULT 0,
  `Char_BankRek` mediumint(8) UNSIGNED DEFAULT 0,
  `Char_BankPin` int(10) UNSIGNED DEFAULT 0,
  `Char_PhoneNum` varchar(50) DEFAULT '-',
  `Char_PhoneOff` int(11) DEFAULT 1,
  `Char_PhoneBattery` int(11) DEFAULT 100,
  `Char_Hours` int(10) UNSIGNED DEFAULT 0,
  `Char_Minutes` int(10) UNSIGNED DEFAULT 0,
  `Char_Seconds` int(10) UNSIGNED DEFAULT 0,
  `Char_Payday` int(10) UNSIGNED DEFAULT 0,
  `Char_Skin` smallint(5) UNSIGNED DEFAULT 0,
  `Char_Gender` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_Age` varchar(30) DEFAULT '',
  `Char_Origin` varchar(128) DEFAULT 'None',
  `Char_BodyHeight` mediumint(9) DEFAULT 0,
  `Char_BodyWeight` mediumint(9) DEFAULT 0,
  `Char_InDoor` mediumint(9) DEFAULT -1,
  `Char_InHouse` mediumint(9) DEFAULT -1,
  `Char_InRusun` mediumint(9) DEFAULT -1,
  `Char_InBiz` mediumint(9) DEFAULT -1,
  `Char_InFamily` mediumint(9) DEFAULT -1,
  `Char_PosX` float DEFAULT 0,
  `Char_PosY` float DEFAULT 0,
  `Char_PosZ` float DEFAULT 0,
  `Char_PosA` float DEFAULT 0,
  `Char_IntID` int(10) UNSIGNED DEFAULT 0,
  `Char_WID` int(10) UNSIGNED DEFAULT 0,
  `Char_Health` float DEFAULT 100,
  `Char_Armour` float DEFAULT 0,
  `Char_Hunger` int(11) DEFAULT 100,
  `Char_Thirst` int(11) DEFAULT 100,
  `Char_Stress` int(11) DEFAULT 100,
  `Char_KnockDown` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_KnockTime` int(11) DEFAULT 0,
  `Char_Faction` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_FactionRank` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_Family` tinyint(4) DEFAULT -1,
  `Char_FamilyRank` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_Jail` int(10) UNSIGNED DEFAULT 0,
  `Char_JailTime` int(10) UNSIGNED DEFAULT 0,
  `Char_JailReason` varchar(126) DEFAULT 'None',
  `Char_JailBy` varchar(64) DEFAULT 'Server',
  `Char_Arrest` int(11) DEFAULT 0,
  `Char_ArrestTime` int(10) DEFAULT 0,
  `Char_Uniform` int(11) DEFAULT 0,
  `Char_UsingUniform` int(11) DEFAULT 0,
  `Char_AskTime` int(10) UNSIGNED DEFAULT 0,
  `Char_Warn` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_Job` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_JobExitTime` int(10) UNSIGNED DEFAULT 0,
  `Char_MowerTime` int(10) UNSIGNED DEFAULT 0,
  `Char_Helmet` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_TogPM` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_TogGlobal` tinyint(3) UNSIGNED DEFAULT 1,
  `Char_Render` float UNSIGNED DEFAULT 0,
  `Char_RenderValue` int(10) UNSIGNED DEFAULT 0,
  `Char_XmasGift` bigint(20) UNSIGNED DEFAULT 0,
  `Char_SKWB` int(10) UNSIGNED DEFAULT 0,
  `Char_SKWBTime` bigint(20) UNSIGNED DEFAULT 0,
  `Char_CallRingtone` varchar(128) DEFAULT 'None',
  `Char_NotifStyle` tinyint(4) DEFAULT 1,
  `Char_AirplaneMode` tinyint(4) DEFAULT 1,
  `Char_HUDMode` tinyint(4) DEFAULT 1,
  `Char_HudColor` int(11) DEFAULT -92245249,
  `Char_UrineTime` bigint(20) DEFAULT 0,
  `Char_Online` tinyint(4) DEFAULT 0,
  `Char_VotePilkada` tinyint(4) DEFAULT 0,
  `Char_Boombox` tinyint(4) DEFAULT 0,
  `Char_Streamer` tinyint(4) DEFAULT NULL,
  `Gun1` int(10) UNSIGNED DEFAULT 0,
  `Gun2` int(10) UNSIGNED DEFAULT 0,
  `Gun3` int(10) UNSIGNED DEFAULT 0,
  `Gun4` int(10) UNSIGNED DEFAULT 0,
  `Gun5` int(10) UNSIGNED DEFAULT 0,
  `Gun6` int(10) UNSIGNED DEFAULT 0,
  `Gun7` int(10) UNSIGNED DEFAULT 0,
  `Gun8` int(10) UNSIGNED DEFAULT 0,
  `Gun9` int(10) UNSIGNED DEFAULT 0,
  `Gun10` int(10) UNSIGNED DEFAULT 0,
  `Gun11` int(10) UNSIGNED DEFAULT 0,
  `Gun12` int(10) UNSIGNED DEFAULT 0,
  `Gun13` int(10) UNSIGNED DEFAULT 0,
  `Ammo1` int(10) UNSIGNED DEFAULT 0,
  `Ammo2` int(10) UNSIGNED DEFAULT 0,
  `Ammo3` int(11) NOT NULL DEFAULT 0,
  `Ammo4` int(11) NOT NULL DEFAULT 0,
  `Ammo5` int(10) UNSIGNED DEFAULT 0,
  `Ammo6` int(10) UNSIGNED DEFAULT 0,
  `Ammo7` int(10) UNSIGNED DEFAULT 0,
  `Ammo8` int(10) UNSIGNED DEFAULT 0,
  `Ammo9` int(10) UNSIGNED DEFAULT 0,
  `Ammo10` int(10) UNSIGNED DEFAULT 0,
  `Ammo11` int(10) UNSIGNED DEFAULT 0,
  `Ammo12` int(10) UNSIGNED DEFAULT 0,
  `Ammo13` int(10) UNSIGNED DEFAULT 0,
  `Char_Head` int(11) DEFAULT 0,
  `Char_Stomach` int(11) DEFAULT 0,
  `Char_LeftArm` int(11) DEFAULT 0,
  `Char_RightArm` int(11) DEFAULT 0,
  `Char_LeftFoot` int(11) DEFAULT 0,
  `Char_RightFoot` int(11) DEFAULT 0,
  `Char_DCTime` bigint(20) DEFAULT 0,
  `Char_BackpackWeight` float(20,3) DEFAULT 0.000,
  `Char_HasGudangID` int(11) DEFAULT -1,
  `Char_HasRusunID` int(11) DEFAULT -1,
  `Char_GudangRentTime` bigint(20) UNSIGNED DEFAULT 0,
  `Char_MaskID` int(11) DEFAULT 0,
  `Char_OnDuty` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_DutyPD` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_DutyPemerintah` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_DutyEms` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_DutyTrans` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_DutyPedagang` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_DutyBengkel` tinyint(3) UNSIGNED DEFAULT 0,
  `Char_SimA` int(11) DEFAULT 0,
  `Char_SimATime` bigint(20) DEFAULT 0,
  `Char_SimB` int(11) DEFAULT 0,
  `Char_SimBTime` bigint(20) DEFAULT 0,
  `Char_SimC` int(11) DEFAULT 0,
  `Char_SimCTime` bigint(20) DEFAULT 0,
  `Char_WeaponLic` int(11) DEFAULT 0,
  `Char_WeaponLicTime` bigint(20) DEFAULT 0,
  `Char_HuntingLic` int(11) DEFAULT 0,
  `Char_HuntingLicTime` bigint(20) DEFAULT 0,
  `Char_Earphone` int(11) DEFAULT 0,
  `Char_Radio` int(11) DEFAULT 0,
  `Char_Ktp` tinyint(4) DEFAULT 0,
  `Char_KtpTime` int(11) DEFAULT 0,
  `Char_DownloadWhatsapp` tinyint(4) DEFAULT 0,
  `Char_DownloadGojek` tinyint(4) DEFAULT 0,
  `Char_DownloadSpotify` tinyint(4) DEFAULT 0,
  `Char_DownloadTwitter` tinyint(4) DEFAULT 0,
  `Char_Kompensasi` int(11) DEFAULT 0,
  `Char_AdminHide` int(11) DEFAULT 0,
  `Char_RusunStorage` float DEFAULT 0,
  `Char_GudangStorage` float DEFAULT 0,
  `Char_OwnedHouse` int(11) DEFAULT -1,
  `Char_FriendHouse` int(11) DEFAULT -1,
  `Char_TogAutoEngine` int(11) DEFAULT 0,
  `Char_SKS` int(11) DEFAULT 0,
  `Char_SKSTime` bigint(20) UNSIGNED DEFAULT 0,
  `Char_SKSNameDoc` varchar(128) DEFAULT 'None',
  `Char_SKSRankDoc` varchar(128) DEFAULT 'None',
  `Char_SKSReason` varchar(128) DEFAULT 'None',
  `Char_SKCK` int(11) DEFAULT 0,
  `Char_SKCKTime` bigint(20) DEFAULT 0,
  `Char_SKCKNamePol` varchar(128) DEFAULT 'None',
  `Char_SKCKRankPol` varchar(128) DEFAULT 'None',
  `Char_SKCKReason` varchar(128) DEFAULT 'None',
  `Char_BPJS` int(11) DEFAULT 0,
  `Char_BPJSTime` bigint(20) DEFAULT 0,
  `Char_BPJSLevel` varchar(128) DEFAULT 'None',
  `Char_Twitter` int(12) DEFAULT 0,
  `Char_TwitterName` varchar(128) DEFAULT 'None',
  `Char_TwitterPassword` varchar(128) DEFAULT '',
  `Char_DelayTrashmaster` int(11) DEFAULT 0,
  `Char_SweeperDelay` int(11) DEFAULT 0,
  `Char_DeliveryDelay` int(11) DEFAULT 0,
  `Char_ForkliftDelay` int(11) DEFAULT 0,
  `Char_BusDelay` int(11) DEFAULT 0,
  `Char_UCP` varchar(22) DEFAULT NULL,
  `Char_Workshop` int(11) DEFAULT -1,
  `Char_WorkshopRank` int(11) DEFAULT 0,
  `Char_Citizen` int(11) NOT NULL DEFAULT 0,
  `Char_CitizenTimer` int(11) NOT NULL DEFAULT 0,
  `Char_NewBie` int(11) DEFAULT 0,
  `Char_SreamerHappy` int(11) NOT NULL DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `player_characters`
--

INSERT INTO `player_characters` (`pID`, `Char_RegisterDate`, `Char_LastLogin`, `Char_Name`, `Char_AdminName`, `Char_AdminRankName`, `Char_AdminPoint`, `Char_IP`, `Char_OnlineTimer`, `Char_TheStars`, `Char_TheStarsTime`, `Char_Admin`, `Char_AdminToggle`, `Char_Spy`, `Char_Level`, `Char_LevelUp`, `Char_Vip`, `Char_VipTime`, `Char_VipName`, `Char_ClaimSP`, `Char_Money`, `Char_RedMoney`, `Char_BankMoney`, `Char_Gopay`, `Char_BankRek`, `Char_BankPin`, `Char_PhoneNum`, `Char_PhoneOff`, `Char_PhoneBattery`, `Char_Hours`, `Char_Minutes`, `Char_Seconds`, `Char_Payday`, `Char_Skin`, `Char_Gender`, `Char_Age`, `Char_Origin`, `Char_BodyHeight`, `Char_BodyWeight`, `Char_InDoor`, `Char_InHouse`, `Char_InRusun`, `Char_InBiz`, `Char_InFamily`, `Char_PosX`, `Char_PosY`, `Char_PosZ`, `Char_PosA`, `Char_IntID`, `Char_WID`, `Char_Health`, `Char_Armour`, `Char_Hunger`, `Char_Thirst`, `Char_Stress`, `Char_KnockDown`, `Char_KnockTime`, `Char_Faction`, `Char_FactionRank`, `Char_Family`, `Char_FamilyRank`, `Char_Jail`, `Char_JailTime`, `Char_JailReason`, `Char_JailBy`, `Char_Arrest`, `Char_ArrestTime`, `Char_Uniform`, `Char_UsingUniform`, `Char_AskTime`, `Char_Warn`, `Char_Job`, `Char_JobExitTime`, `Char_MowerTime`, `Char_Helmet`, `Char_TogPM`, `Char_TogGlobal`, `Char_Render`, `Char_RenderValue`, `Char_XmasGift`, `Char_SKWB`, `Char_SKWBTime`, `Char_CallRingtone`, `Char_NotifStyle`, `Char_AirplaneMode`, `Char_HUDMode`, `Char_HudColor`, `Char_UrineTime`, `Char_Online`, `Char_VotePilkada`, `Char_Boombox`, `Char_Streamer`, `Gun1`, `Gun2`, `Gun3`, `Gun4`, `Gun5`, `Gun6`, `Gun7`, `Gun8`, `Gun9`, `Gun10`, `Gun11`, `Gun12`, `Gun13`, `Ammo1`, `Ammo2`, `Ammo3`, `Ammo4`, `Ammo5`, `Ammo6`, `Ammo7`, `Ammo8`, `Ammo9`, `Ammo10`, `Ammo11`, `Ammo12`, `Ammo13`, `Char_Head`, `Char_Stomach`, `Char_LeftArm`, `Char_RightArm`, `Char_LeftFoot`, `Char_RightFoot`, `Char_DCTime`, `Char_BackpackWeight`, `Char_HasGudangID`, `Char_HasRusunID`, `Char_GudangRentTime`, `Char_MaskID`, `Char_OnDuty`, `Char_DutyPD`, `Char_DutyPemerintah`, `Char_DutyEms`, `Char_DutyTrans`, `Char_DutyPedagang`, `Char_DutyBengkel`, `Char_SimA`, `Char_SimATime`, `Char_SimB`, `Char_SimBTime`, `Char_SimC`, `Char_SimCTime`, `Char_WeaponLic`, `Char_WeaponLicTime`, `Char_HuntingLic`, `Char_HuntingLicTime`, `Char_Earphone`, `Char_Radio`, `Char_Ktp`, `Char_KtpTime`, `Char_DownloadWhatsapp`, `Char_DownloadGojek`, `Char_DownloadSpotify`, `Char_DownloadTwitter`, `Char_Kompensasi`, `Char_AdminHide`, `Char_RusunStorage`, `Char_GudangStorage`, `Char_OwnedHouse`, `Char_FriendHouse`, `Char_TogAutoEngine`, `Char_SKS`, `Char_SKSTime`, `Char_SKSNameDoc`, `Char_SKSRankDoc`, `Char_SKSReason`, `Char_SKCK`, `Char_SKCKTime`, `Char_SKCKNamePol`, `Char_SKCKRankPol`, `Char_SKCKReason`, `Char_BPJS`, `Char_BPJSTime`, `Char_BPJSLevel`, `Char_Twitter`, `Char_TwitterName`, `Char_TwitterPassword`, `Char_DelayTrashmaster`, `Char_SweeperDelay`, `Char_DeliveryDelay`, `Char_ForkliftDelay`, `Char_BusDelay`, `Char_UCP`, `Char_Workshop`, `Char_WorkshopRank`, `Char_Citizen`, `Char_CitizenTimer`, `Char_NewBie`, `Char_SreamerHappy`) VALUES
(1, '2025-12-14 19:07:35', '2025-12-20 14:31:36', 'Chaxw_Chanw', 'Chaxw', 'NULL', 0, '255.255.255.255', 432, 0, 0, 7, 1, 0, 1, 1, 3, 0, '', 0, 1001600, 0, 2000, 0, 116918, 0, '081211392127', 1, 100, 0, 0, 0, 0, 22, 1, '19/09/2000', 'indonesia', 160, 50, -1, -1, -1, -1, -1, 2074.34, -1210.34, 24.1078, 135.325, 0, 0, 63, 0, 100, 100, 15, 0, 0, 0, 0, -1, 0, 0, 0, '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 1000, 0, 1, 1766372855, '', 1, 0, 1, -92245249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 100, 100, 100, 100, 100, 1766273496, 0.450, -1, -1, 0, 70888, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 1, 0, 0, 'N/A', 'N/A', 'N/A', 0, 0, 'N/A', 'N/A', '', 0, 0, 'N/A', 1, 'Chaxw79', 'BANGLOKAL', 0, 0, 0, 0, 0, 'Chaxw', -1, 0, 0, 0, 246, 0),
(2, '2025-12-18 02:44:54', '2025-12-18 02:45:55', 'Wul_Ghz', 'Chaxw', 'NULL', 0, '255.255.255.255', 35, 0, 0, 0, 1, 0, 1, 1, 0, 0, '', 0, 5000, 0, 2000, 0, 989386, 0, '081280540853', 1, 100, 0, 0, 0, 0, 193, 2, '19/09/1999', 'indonesia', 160, 45, -1, -1, -1, -1, -1, 1331.43, -2372.63, 22.3703, 65.1391, 0, 0, 100, 0, 100, 100, 0, 0, 0, 0, 0, -1, 0, 0, 0, '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 1000, 0, 1, 1766659494, '', 1, 0, 2, -92245249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 100, 100, 100, 100, 100, 0, 0.500, -1, -1, 0, 70588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 1, 0, 0, 'N/A', 'N/A', 'N/A', 0, 0, 'N/A', 'N/A', '', 0, 0, 'N/A', 0, '', '', 0, 0, 0, 0, 0, 'Chaxw', -1, 0, 0, 0, 3547, 0),
(3, '2025-12-20 15:12:47', '2025-12-20 15:13:06', 'Cjaxw_AChax', 'ChaxwOne', 'NULL', 0, '255.255.255.255', 12, 0, 0, 0, 1, 0, 1, 1, 0, 0, '', 0, 6000, 0, 2000, 0, 124904, 0, '081215826796', 1, 100, 0, 0, 0, 0, 193, 2, '10/10/1999', 'brazil', 160, 50, -1, -1, -1, -1, -1, 1683.73, -2315.39, 13.6828, 15.7045, 0, 0, 100, 0, 100, 100, 0, 0, 0, 0, 0, -1, 0, 0, 0, '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 1000, 0, 1, 1766877167, '', 1, 0, 2, -92245249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 100, 100, 100, 100, 100, 0, 0.500, -1, -1, 0, 36776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 1, 0, 0, 'N/A', 'N/A', 'N/A', 0, 0, 'N/A', 'N/A', '', 0, 0, 'N/A', 0, '', '', 0, 0, 0, 0, 0, 'ChaxwOne', -1, 0, 0, 0, 3581, 0);

-- --------------------------------------------------------

--
-- Table structure for table `player_factionvehicle`
--

CREATE TABLE `player_factionvehicle` (
  `vID` int(11) NOT NULL,
  `PFVeh_OwnerID` int(11) DEFAULT -1,
  `PFVeh_ModelID` int(11) DEFAULT 0,
  `PFVeh_PosX` float DEFAULT 0,
  `PFVeh_PosY` float DEFAULT 0,
  `PFVeh_PosZ` float DEFAULT 0,
  `PFVeh_PosA` float DEFAULT 0,
  `PFVeh_Health` float DEFAULT 0,
  `PFVeh_Fuel` int(11) DEFAULT 0,
  `PFVeh_Interior` int(11) DEFAULT 0,
  `PFVeh_World` int(11) DEFAULT 0,
  `PFVeh_Damage0` int(11) DEFAULT 0,
  `PFVeh_Damage1` int(11) DEFAULT 0,
  `PFVeh_Damage2` int(11) DEFAULT 0,
  `PFVeh_Damage3` int(11) DEFAULT 0,
  `PFVeh_Color1` int(11) DEFAULT 0,
  `PFVeh_Color2` int(11) DEFAULT 0,
  `PFVeh_Faction` int(11) DEFAULT 0,
  `PFVeh_DCTime` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `player_gudang`
--

CREATE TABLE `player_gudang` (
  `ID` int(11) DEFAULT 0,
  `itemID` int(11) NOT NULL,
  `itemName` varchar(32) DEFAULT NULL,
  `itemModel` int(11) DEFAULT 0,
  `itemQuantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `player_housestorage`
--

CREATE TABLE `player_housestorage` (
  `ID` int(11) DEFAULT 0,
  `hsItemID` int(11) NOT NULL,
  `hsItemName` varchar(32) DEFAULT NULL,
  `hsItemModel` int(11) DEFAULT 0,
  `hsItemQuantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `player_rusunstorage`
--

CREATE TABLE `player_rusunstorage` (
  `ID` int(11) DEFAULT 0,
  `rsItemID` int(11) NOT NULL,
  `rsItemName` varchar(32) DEFAULT NULL,
  `rsItemModel` int(11) DEFAULT 0,
  `rsItemQuantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `player_rusunstorage`
--

INSERT INTO `player_rusunstorage` (`ID`, `rsItemID`, `rsItemName`, `rsItemModel`, `rsItemQuantity`) VALUES
(1252, 3, 'Kevlar', 19515, 75),
(1252, 4, 'Kevlar', 19515, 87),
(275, 7, 'Bandage', 11736, 60),
(275, 8, 'Tools Kit', 19918, 80),
(275, 9, 'Kevlar', 19515, 60),
(1552, 11, 'Kanabis', 19473, 2),
(1552, 12, 'Kevlar', 19515, 20),
(1552, 13, 'Bandage', 11736, 10);

-- --------------------------------------------------------

--
-- Table structure for table `player_vehicles`
--

CREATE TABLE `player_vehicles` (
  `id` int(10) UNSIGNED NOT NULL,
  `PVeh_OwnerID` int(11) DEFAULT -1,
  `PVeh_ModelID` int(11) DEFAULT 0,
  `PVeh_Color1` int(11) DEFAULT 0,
  `PVeh_Color2` int(11) DEFAULT 0,
  `PVeh_Paintjob` int(11) DEFAULT -1,
  `PVeh_Neon` int(11) DEFAULT 0,
  `PVeh_Locked` int(11) DEFAULT 0,
  `PVeh_Plate` varchar(50) NOT NULL DEFAULT 'None',
  `PVeh_PlateTime` bigint(20) DEFAULT 0,
  `PVeh_PlateOwned` int(11) DEFAULT 0,
  `PVeh_Price` int(11) DEFAULT 200000,
  `PVeh_Health` float DEFAULT 1000,
  `PVeh_Fuel` int(11) DEFAULT 100,
  `PVeh_PosX` float DEFAULT 0,
  `PVeh_PosY` float DEFAULT 0,
  `PVeh_PosZ` float DEFAULT 0,
  `PVeh_PosA` float DEFAULT 0,
  `PVeh_Interior` int(11) DEFAULT 0,
  `PVeh_World` int(11) DEFAULT 0,
  `PVeh_Damage0` int(11) DEFAULT 0,
  `PVeh_Damage1` int(11) DEFAULT 0,
  `PVeh_Damage2` int(11) DEFAULT 0,
  `PVeh_Damage3` int(11) DEFAULT 0,
  `PVeh_Mod0` int(11) DEFAULT 0,
  `PVeh_Mod1` int(11) DEFAULT 0,
  `PVeh_Mod2` int(11) DEFAULT 0,
  `PVeh_Mod3` int(11) DEFAULT 0,
  `PVeh_Mod4` int(11) DEFAULT 0,
  `PVeh_Mod5` int(11) DEFAULT 0,
  `PVeh_Mod6` int(11) DEFAULT 0,
  `PVeh_Mod7` int(11) DEFAULT 0,
  `PVeh_Mod8` int(11) DEFAULT 0,
  `PVeh_Mod9` int(11) DEFAULT 0,
  `PVeh_Mod10` int(11) DEFAULT 0,
  `PVeh_Mod11` int(11) DEFAULT 0,
  `PVeh_Mod12` int(11) DEFAULT 0,
  `PVeh_Mod13` int(11) DEFAULT 0,
  `PVeh_Mod14` int(11) DEFAULT 0,
  `PVeh_Mod15` int(11) DEFAULT 0,
  `PVeh_Mod16` int(11) DEFAULT 0,
  `PVeh_LockTire` int(11) DEFAULT 0,
  `PVeh_EngineUpgrade` int(11) DEFAULT 0,
  `PVeh_BodyUpgrade` int(11) DEFAULT 0,
  `PVeh_BodyRepair` float DEFAULT 0,
  `PVeh_Weapon1` int(11) DEFAULT 0,
  `PVeh_Weapon2` int(11) DEFAULT 0,
  `PVeh_Weapon3` int(11) DEFAULT 0,
  `PVeh_Ammo1` int(11) DEFAULT 0,
  `PVeh_Ammo2` int(11) DEFAULT 0,
  `PVeh_Ammo3` int(11) DEFAULT 0,
  `PVeh_Rental` int(11) DEFAULT -1,
  `PVeh_RentTime` bigint(20) DEFAULT 0,
  `PVeh_Parked` int(11) DEFAULT -1,
  `PVeh_Broken` tinyint(1) DEFAULT 0,
  `PVeh_Insuranced` int(11) DEFAULT 0,
  `PVeh_Faction` int(11) DEFAULT 0,
  `PVeh_Donation` int(11) DEFAULT 0,
  `PVeh_DCTime` bigint(20) DEFAULT 0,
  `PVeh_Impounded` int(11) DEFAULT 0,
  `PVeh_ImpoundedTime` bigint(20) DEFAULT 0,
  `PVeh_ImpoundedPrice` int(11) DEFAULT 0,
  `PVeh_ImpoundedReason` varchar(128) DEFAULT '-',
  `PVeh_Housed` int(11) DEFAULT -1,
  `PVeh_Helipad` int(11) DEFAULT -1,
  `PVeh_Families` int(11) DEFAULT -1,
  `PVeh_FactionGarage` int(11) DEFAULT -1,
  `PVeh_Capacity` float DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `player_vehicles`
--

INSERT INTO `player_vehicles` (`id`, `PVeh_OwnerID`, `PVeh_ModelID`, `PVeh_Color1`, `PVeh_Color2`, `PVeh_Paintjob`, `PVeh_Neon`, `PVeh_Locked`, `PVeh_Plate`, `PVeh_PlateTime`, `PVeh_PlateOwned`, `PVeh_Price`, `PVeh_Health`, `PVeh_Fuel`, `PVeh_PosX`, `PVeh_PosY`, `PVeh_PosZ`, `PVeh_PosA`, `PVeh_Interior`, `PVeh_World`, `PVeh_Damage0`, `PVeh_Damage1`, `PVeh_Damage2`, `PVeh_Damage3`, `PVeh_Mod0`, `PVeh_Mod1`, `PVeh_Mod2`, `PVeh_Mod3`, `PVeh_Mod4`, `PVeh_Mod5`, `PVeh_Mod6`, `PVeh_Mod7`, `PVeh_Mod8`, `PVeh_Mod9`, `PVeh_Mod10`, `PVeh_Mod11`, `PVeh_Mod12`, `PVeh_Mod13`, `PVeh_Mod14`, `PVeh_Mod15`, `PVeh_Mod16`, `PVeh_LockTire`, `PVeh_EngineUpgrade`, `PVeh_BodyUpgrade`, `PVeh_BodyRepair`, `PVeh_Weapon1`, `PVeh_Weapon2`, `PVeh_Weapon3`, `PVeh_Ammo1`, `PVeh_Ammo2`, `PVeh_Ammo3`, `PVeh_Rental`, `PVeh_RentTime`, `PVeh_Parked`, `PVeh_Broken`, `PVeh_Insuranced`, `PVeh_Faction`, `PVeh_Donation`, `PVeh_DCTime`, `PVeh_Impounded`, `PVeh_ImpoundedTime`, `PVeh_ImpoundedPrice`, `PVeh_ImpoundedReason`, `PVeh_Housed`, `PVeh_Helipad`, `PVeh_Families`, `PVeh_FactionGarage`, `PVeh_Capacity`) VALUES
(1, 1, 468, 1, 1, -1, 0, 0, '-', 0, 0, 10000, 800, 99, 215.804, -1426.33, 12.9406, 63.9252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 56, 0, 0, 0, 0, 1766273496, 0, 0, 0, '', -1, -1, -1, -1, 0),
(2, 2, 462, 122, 95, -1, 0, 0, 'Rental', 0, 0, 1000, 1500, 100, 1331.43, -2372.63, 21.4703, 269.471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1766056525, -1, 0, 0, 0, 0, 1766058355, 0, 0, 0, '', -1, -1, -1, -1, 0),
(3, 1, 411, 0, 0, -1, 0, 0, '-', 0, 0, 10000, 800, 99, 214.81, -1425.37, 12.9945, 46.4528, 0, 0, 17825808, 512, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 56, 0, 0, 0, 0, 1766273496, 0, 0, 0, '', -1, -1, -1, -1, 0),
(4, 1, 560, 2, 2, -1, 0, 0, '-', 0, 0, 10000, 1000, 98, 1064.85, -1771.45, 13.202, 166.467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 40, 0, 0, 0, 0, 1766273496, 0, 0, 0, '', -1, -1, -1, -1, 0);

-- --------------------------------------------------------

--
-- Table structure for table `polisi_brankas`
--

CREATE TABLE `polisi_brankas` (
  `PID` int(11) DEFAULT 0,
  `ID` int(11) NOT NULL,
  `Item` varchar(64) NOT NULL DEFAULT '-',
  `Model` int(11) DEFAULT 0,
  `Quantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `polisi_brankas`
--

INSERT INTO `polisi_brankas` (`PID`, `ID`, `Item`, `Model`, `Quantity`) VALUES
(0, 4, 'Plat Besi', 3117, 10),
(0, 6, 'Bandage', 11736, 251);

-- --------------------------------------------------------

--
-- Table structure for table `public_garage`
--

CREATE TABLE `public_garage` (
  `pgID` int(11) NOT NULL,
  `pgName` varchar(64) DEFAULT 'N/A',
  `pgPosX` float DEFAULT 0,
  `pgPosY` float DEFAULT 0,
  `pgPosZ` float DEFAULT 0,
  `pgSpawnX` float DEFAULT 0,
  `pgSpawnY` float DEFAULT 0,
  `pgSpawnZ` float DEFAULT 0,
  `pgSpawnA` float DEFAULT 0,
  `pgInterior` int(11) NOT NULL DEFAULT 0,
  `pgWorld` int(11) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `public_garage`
--

INSERT INTO `public_garage` (`pgID`, `pgName`, `pgPosX`, `pgPosY`, `pgPosZ`, `pgSpawnX`, `pgSpawnY`, `pgSpawnZ`, `pgSpawnA`, `pgInterior`, `pgWorld`) VALUES
(0, 'BANDARA LS', 1560.02, -2244.46, 13.5441, 1554.88, -2244.37, 13.5462, 95.042, 0, 0),
(1, 'BALAI KOTA LS', 1434.57, -1769.64, 13.5469, 1428.01, -1770.49, 13.5469, 103.279, 0, 0),
(2, 'KARNAVAL', 367.531, -2042.84, 7.67188, 368.788, -2039.45, 7.67188, 345.666, 0, 0),
(3, 'GARASI PEDAGANG', 529.045, -1788.22, 5.92293, 521.671, -1781.19, 5.79781, 85.1479, 0, 0),
(4, 'balai kota 2', 1536.57, -1756.38, 13.5469, 1538.17, -1763.06, 13.5469, 188.199, 0, 0),
(5, 'GARASI RUMAH SAKIT LV', 1363.36, 743.337, 10.8203, 1380.02, 740.688, 10.8203, 274.12, 0, 0),
(6, 'GARASI DEPAN KANPOL', 1290.24, 342.957, 19.5547, 1284.76, 345.003, 19.5547, 72.2117, 0, 0),
(7, 'GARASI MINYAK 1', 506.111, 1263.28, 9.50502, 494.569, 1263.61, 9.09345, 93.3345, 0, 0),
(8, 'GARASI MINYAK 2', 522.085, 1542.7, 1, 525.664, 1538.07, 1, 229.198, 0, 0),
(9, 'GARASI MINYAK 3', 276.891, 1474.34, 10.5859, 277.529, 1460.74, 10.5859, 184.052, 0, 0),
(10, 'GARASI TAMBAH 1', 638.444, 890.35, -42.9609, 639.385, 880.387, -42.9609, 192.728, 0, 0),
(11, 'GARASI TAMBAH 2', -357.994, 1162.9, 19.7422, -352.491, 1156.23, 19.7422, 221.689, 0, 0),
(12, 'GARASI BENNY HAPPY', -82.3663, 1079.64, 19.7422, -80.9264, 1086.94, 19.7422, 348.859, 0, 0),
(13, 'GARASI TAMBAH 3', 2202.4, -2272.1, 13.5469, 2201.96, -2229.11, 13.5469, 6.96751, 0, 0),
(14, 'GARASI HUTAN KAYU', -520.586, -68.9263, 62.3894, -515.802, -67.9601, 62.1556, 274.805, 0, 0),
(15, 'GARASI PELABUHAN LS', 2774.64, -2427.16, 13.7209, 2773.07, -2419.83, 13.685, 0, 0, 0),
(16, 'GARASI BUS KOTA', 128.274, -273.505, 1.57812, 123.001, -268.115, 1.57812, 41.6643, 0, 0),
(17, 'GARASI DEALER LS', 543.918, -1278.69, 17.2422, 549.106, -1271.91, 17.2422, 326.645, 0, 0),
(18, 'GARASI BAHAMAS LS', 2425.72, -1234.01, 24.6753, 2415.45, -1232.75, 24.2498, 166.577, 0, 0),
(19, 'GARASI AYAM Q', 1528.72, 55.5638, 26.3729, 1531.51, 59.8985, 26.6095, 308.956, 0, 0),
(20, 'GARANSI MATRA 2', 1911.86, 175.283, 37.272, 1909.82, 170.575, 37.2029, 158.365, 0, 0),
(21, 'SHADOW-MC', -2179.5, -2366.49, 30.625, -2185.53, -2367.04, 30.625, 82.7676, 0, 0),
(22, 'PAKONG HOUSE', 2341.75, -902.973, 108.897, 2342.44, -897.781, 108.897, 1.50415, 0, 0),
(23, 'KAISAR-MC', 1392.78, 385.752, 19.7578, 1396.38, 390.918, 19.7578, 306.715, 0, 0),
(24, 'JOGES STREET GENG', 2272.84, -1037.58, 50.9188, 2272.84, -1037.58, 50.9188, 41.1621, 0, 0),
(25, 'BRATVA VOLKA FAMILLIA', 2566.26, 2770.67, 10.8203, 2557.44, 2769.7, 10.8203, 329.977, 0, 0),
(26, 'EAST-BEACH', 2797.32, -1572.32, 10.9272, 2804.78, -1574.83, 10.9274, 234.659, 0, 0),
(27, 'GRIMSON-THE-FAMILY', -2754.35, -296.171, 7.03906, -2760.61, -295.425, 7.04677, 98.3718, 0, 0),
(28, 'ZBLOCK-GANTON', 2497.78, -1668.81, 13.3436, 2488.57, -1668.96, 13.3359, 85.4526, 0, 0),
(29, 'ANARKI', 2249.85, -1908.07, 13.5469, 2247.5, -1903.49, 13.5469, 21.5165, 0, 0),
(30, '18-STREET-GANGS', 2224.13, -1439.37, 23.9945, 2218.41, -1440.03, 24, 96.515, 0, 0),
(31, 'CARTEL LV', -295.875, 1768.19, 42.6875, -295.583, 1763.52, 42.6875, 176.539, 0, 0),
(32, 'MUNKAR-13-STREET', 2451.92, -2022.17, 13.5469, 2449.86, -2015.14, 13.5469, 17.9209, 0, 0),
(33, 'THE-BIG-EAR', -302.797, 1578.13, 75.3594, -293.838, 1572.22, 75.3594, 213.439, 0, 0),
(34, '45TH-PELUPIS', 1993.47, -1274.76, 23.8203, 1987.1, -1276.68, 23.8203, 104.477, 0, 0),
(35, 'garkot pd', 1560.82, -1612, 13.3828, 1568.24, -1611.73, 13.3828, 174.398, 0, 0),
(36, 'RUMAH SAKIT', 2268.3, 610.42, 10.8603, 2264.93, 620.823, 10.8603, 0.146709, 0, 0),
(37, '13-mara', 1290.08, 186.367, 20.3792, 1282.43, 184.541, 20.0073, 106.501, 0, 0),
(38, 'BRATVO-VOLKA-FAMILY', -517.822, 2561.63, 53.4141, -517.822, 2561.63, 53.4141, 73.6571, 0, 0),
(39, 'LOS-ZETAS', 2011.39, 2148.86, 10.8203, 2017.9, 2148.19, 10.8203, 233.938, 0, 0),
(40, 'WICAKSONO-AUTOMOTIF', 1065.02, -1772.42, 13.356, 1069.7, -1767.24, 13.365, 307.772, 0, 0),
(41, 'RYCEL 1', 2296.25, 2758.87, 10.8203, 2300.26, 2763.08, 10.8203, 316.67, 0, 0),
(42, 'KARGO', -1721.93, 79.4371, 3.54956, -1725.82, 73.085, 3.55469, 210.564, 0, 0),
(43, 'HELIPAD', 1150.58, -2054.2, 69.0006, 1157.41, -2053.13, 69.0006, 268.565, 0, 0),
(44, 'STAFF ONLY', 2365.62, -648.073, 127.761, 2370.51, -652.149, 127.564, 248.181, 0, 0),
(45, 'BWK-STRET-GANGS', 2595.51, -1117.83, 66.5954, 2596.35, -1112.68, 67.3796, 357.828, 0, 0),
(46, 'WEST-BLOCK-CRIPS', 1221.69, -983.299, 43.4766, 1225.29, -979.372, 43.4766, 305.261, 0, 0),
(47, 'RUSUN ALSTON', 2216.85, -1166.66, 25.7266, 2221.19, -1158.03, 25.7331, 312.844, 0, 0),
(48, 'WESTERDAM', 959.292, -1533.1, 13.5747, 965.108, -1533.31, 13.5751, 275.415, 0, 0),
(49, 'BAHAMAS LV', 1179.74, -926.177, 43.4302, 1173.04, -904.034, 43.4672, 195.945, 0, 0),
(50, 'BASKET-LS', 2784.42, -1995, 13.3828, 2778.16, -1996.32, 13.3439, 74.8714, 0, 0),
(51, 'SUTOA', 152.067, -169.192, 1.57812, 142.708, -167.383, 1.57812, 93.1828, 0, 0),
(52, 'BAYSIDE', -2473.49, 2223.68, 4.84375, -2472.27, 2232.64, 4.80899, 352.587, 0, 0),
(53, 'LSPD GARAGE', 1513.03, -1658.16, 13.5469, 1520.34, -1659.36, 13.5469, 263.775, 0, 0),
(54, 'PENJAHIT 1', 2356.32, -93.7046, 26.6622, 2352.01, -92.9751, 26.4766, 39.7902, 0, 0),
(55, 'conferse centar', 1272.67, -1827.59, 13.3857, 1274.21, -1835.74, 13.3888, 213.083, 0, 0),
(56, 'RODEO', 215.566, -1426.39, 13.2666, 220.886, -1431.45, 13.289, 226.363, 0, 0),
(57, 'KELEB', 1097.55, -637.163, 111.982, 1090.57, -642.188, 113.149, 310.531, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `race_cps`
--

CREATE TABLE `race_cps` (
  `ID` int(11) NOT NULL,
  `RaceID` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  `PosX` float NOT NULL DEFAULT 0,
  `PosY` float NOT NULL DEFAULT 0,
  `PosZ` float NOT NULL DEFAULT 0,
  `CPIndex` varchar(16) NOT NULL DEFAULT 'Index_Null'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `race_cps`
--

INSERT INTO `race_cps` (`ID`, `RaceID`, `Type`, `PosX`, `PosY`, `PosZ`, `CPIndex`) VALUES
(1, 1, 0, -1560.61, 769.873, 6.39818, 'Index_0'),
(2, 1, 0, -1558.71, 816.862, 6.39507, 'Index_1'),
(3, 1, 0, -1558.43, 872.842, 6.39833, 'Index_2'),
(4, 1, 1, -1558.46, 908.906, 6.39868, 'Index_3'),
(5, 2, 0, -777.269, -100.433, 64.5171, 'Index_0'),
(6, 2, 0, -728.852, -77.4512, 67.8532, 'Index_1'),
(7, 2, 0, -678.228, -27.5956, 70.2535, 'Index_2'),
(8, 2, 0, -674.313, 11.554, 69.7326, 'Index_3'),
(9, 2, 0, -750.023, -8.14083, 52.0646, 'Index_4'),
(10, 2, 0, -871.506, -49.7644, 38.3015, 'Index_5'),
(11, 2, 0, -869.435, -6.95028, 32.9093, 'Index_6'),
(12, 2, 0, -742.671, 20.9656, 33.64, 'Index_7'),
(13, 2, 0, -665.641, 62.1172, 29.8354, 'Index_8'),
(14, 2, 0, -773.209, 128.965, 10.1129, 'Index_9'),
(15, 2, 0, -651.509, 260.403, 1.76129, 'Index_10'),
(16, 2, 0, -350.083, 269.924, 1.76139, 'Index_11'),
(17, 2, 0, -213.243, 239.071, 11.7403, 'Index_12'),
(18, 2, 0, -257.627, 114.454, 0.772548, 'Index_13'),
(19, 2, 0, -258.996, -248.598, 0.992058, 'Index_14'),
(20, 2, 0, -319.653, -276.592, 7.75747, 'Index_15'),
(21, 2, 0, -540.771, -258.486, 58.1306, 'Index_16'),
(22, 2, 0, -845.679, -246.868, 38.327, 'Index_17'),
(23, 2, 0, -933.575, -182.307, 45.2049, 'Index_18'),
(24, 2, 0, -856.568, -128.594, 60.0187, 'Index_19'),
(25, 2, 1, -781.621, -101.7, 64.3046, 'Index_20'),
(26, 3, 0, -0.782596, 1196.74, 18.894, 'Index_0'),
(27, 3, 0, 23.9177, 1197.24, 18.6771, 'Index_1'),
(28, 3, 0, 71.515, 1198.22, 18.2736, 'Index_2'),
(29, 3, 0, 105.742, 1203.93, 18.8005, 'Index_3'),
(30, 3, 0, 62.0716, 1244.01, 16.7654, 'Index_4'),
(31, 3, 0, -110.694, 1253.89, 16.2167, 'Index_5'),
(32, 3, 0, -109.158, 1199.6, 19.2764, 'Index_6'),
(33, 3, 0, -36.5882, 1198.62, 18.8942, 'Index_7'),
(34, 3, 1, -36.5882, 1198.62, 18.8942, 'Index_8'),
(35, 4, 0, -114.742, 1256.2, 17.0201, 'Index_0'),
(36, 4, 0, -261.214, 1242.98, 23.7819, 'Index_1'),
(37, 4, 0, -413.406, 1357.8, 28.9083, 'Index_2'),
(38, 4, 0, -452.285, 1593.13, 35.6085, 'Index_3'),
(39, 4, 0, -400.696, 1731.71, 40.8815, 'Index_4'),
(40, 4, 0, -399.009, 1914.55, 57.789, 'Index_5'),
(41, 4, 0, -426.915, 1784.7, 70.7266, 'Index_6'),
(42, 4, 0, -475.897, 1941.25, 85.8792, 'Index_7'),
(43, 4, 0, -382.335, 2077.92, 60.4823, 'Index_8'),
(44, 4, 0, -500.99, 1989.79, 59.8708, 'Index_9'),
(45, 4, 0, -717.06, 2068.15, 59.8708, 'Index_10'),
(46, 4, 0, -873.772, 1925.05, 59.9293, 'Index_11'),
(47, 4, 0, -884.911, 1796.68, 59.87, 'Index_12'),
(48, 4, 0, -1020.83, 1856.19, 61.1632, 'Index_13'),
(49, 4, 0, -1153.12, 1791.3, 39.701, 'Index_14'),
(50, 4, 0, -1039.61, 1727.76, 30.839, 'Index_15'),
(51, 4, 0, -908.9, 1694.5, 26.9682, 'Index_16'),
(52, 4, 0, -849.175, 1430.57, 13.4301, 'Index_17'),
(53, 4, 0, -718.689, 1230.72, 12.9942, 'Index_18'),
(54, 4, 0, -589.482, 1129.51, 9.82487, 'Index_19'),
(55, 4, 0, -359.984, 955.271, 10.1537, 'Index_20'),
(56, 4, 0, -304.01, 877.908, 9.09994, 'Index_21'),
(57, 4, 0, -276.259, 790.177, 15.2551, 'Index_22'),
(58, 4, 0, -83.9492, 837.842, 18.2836, 'Index_23'),
(59, 4, 0, 99.6735, 885.509, 22.2188, 'Index_24'),
(60, 4, 0, 218.055, 973.822, 28.0061, 'Index_25'),
(61, 4, 0, 179.235, 1144.14, 13.9406, 'Index_26'),
(62, 4, 0, 95.2606, 1226.81, 19.9563, 'Index_27'),
(63, 4, 0, -103.909, 1259.19, 15.3582, 'Index_28'),
(64, 4, 1, -104.729, 1259.12, 15.4828, 'Index_29');

-- --------------------------------------------------------

--
-- Table structure for table `race_list`
--

CREATE TABLE `race_list` (
  `ID` int(11) NOT NULL,
  `OwnerID` int(11) NOT NULL DEFAULT 0,
  `RaceName` varchar(24) NOT NULL DEFAULT 'Noname',
  `CreationDate` varchar(26) NOT NULL DEFAULT '01/01/1999'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `race_list`
--

INSERT INTO `race_list` (`ID`, `OwnerID`, `RaceName`, `CreationDate`) VALUES
(1, 22, 'test', '29/07/2023'),
(2, 1318, 'Example: Track Lembah', '21/09/2025'),
(3, 1318, 'tes', '22/09/2025'),
(4, 1318, 'Fort Carson', '22/09/2025');

-- --------------------------------------------------------

--
-- Table structure for table `reports`
--

CREATE TABLE `reports` (
  `ID` int(11) NOT NULL,
  `Reporter` varchar(24) NOT NULL,
  `Reason` varchar(200) NOT NULL,
  `Date` varchar(30) NOT NULL,
  `Accepted` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `robbery`
--

CREATE TABLE `robbery` (
  `RobberyID` int(11) DEFAULT NULL,
  `RobberyX` float DEFAULT 0,
  `RobberyY` float DEFAULT 0,
  `RobberyZ` float DEFAULT 0,
  `RobberyRX` float DEFAULT 0,
  `RobberyRY` float DEFAULT 0,
  `RobberyRZ` float DEFAULT 0,
  `RobberyInterior` int(11) DEFAULT 0,
  `RobberyWorld` int(11) DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `robbery`
--

INSERT INTO `robbery` (`RobberyID`, `RobberyX`, `RobberyY`, `RobberyZ`, `RobberyRX`, `RobberyRY`, `RobberyRZ`, `RobberyInterior`, `RobberyWorld`) VALUES
(1, 1308.95, -873.862, 40.7781, 0, 0, 0, 0, 0),
(2, 27.1736, -268.245, 2.80818, 0, 0, -90.4, 0, 0),
(3, -2192.78, -2240.74, 31.9481, 0, 0, -37.7, 0, 0),
(4, 2530.5, -1538.87, 25.1781, 0, 0, -179.8, 0, 0),
(5, -2353.63, 1018.97, 52.1882, 0, 0, 0.099968, 0, 0),
(6, 63.194, 1135.91, 20.9381, 0, 0, -93.5, 0, 0),
(7, 2570.85, 76.1996, 27.8481, 0, 0, 0, 0, 0),
(8, -2646.84, 1344.68, 8.37431, 0, 0, 90.2, 0, 0),
(9, 2321.97, 960.496, 12.0781, 0, 0, -90.7001, 0, 0),
(10, 245.154, -55.9351, 1.05764, 0, 0, 179.7, 0, 0),
(1, 1308.95, -873.862, 40.7781, 0, 0, 0, 0, 0),
(2, 27.1736, -268.245, 2.80818, 0, 0, -90.4, 0, 0),
(3, -2192.78, -2240.74, 31.9481, 0, 0, -37.7, 0, 0),
(4, 2530.5, -1538.87, 25.1781, 0, 0, -179.8, 0, 0),
(5, -2353.63, 1018.97, 52.1882, 0, 0, 0.099968, 0, 0),
(6, 63.194, 1135.91, 20.9381, 0, 0, -93.5, 0, 0),
(7, 2570.85, 76.1996, 27.8481, 0, 0, 0, 0, 0),
(8, -2646.84, 1344.68, 8.37431, 0, 0, 90.2, 0, 0),
(9, 2321.97, 960.496, 12.0781, 0, 0, -90.7001, 0, 0),
(10, 245.154, -55.9351, 1.05764, 0, 0, 179.7, 0, 0),
(11, 2213.29, 924.796, 11.2069, 0, 0, 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `slotmachine`
--

CREATE TABLE `slotmachine` (
  `ID` int(11) NOT NULL,
  `PosX` float DEFAULT NULL,
  `PosY` float DEFAULT NULL,
  `PosZ` float DEFAULT NULL,
  `RotX` float DEFAULT NULL,
  `RotY` float DEFAULT NULL,
  `RotZ` float DEFAULT NULL,
  `Interior` int(11) DEFAULT NULL,
  `World` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `slotmachine`
--

INSERT INTO `slotmachine` (`ID`, `PosX`, `PosY`, `PosZ`, `RotX`, `RotY`, `RotZ`, `Interior`, `World`) VALUES
(0, 1947.12, 993.837, 992.461, 0, 0, -94.3999, 10, 0),
(1, 2235.47, 1610.16, 1006.19, 0, 0, -88.5, 1, 0),
(2, 2225.38, 1618.9, 1006.18, 0, 0, 90.9, 1, 59),
(3, 2235.64, 1608.69, 1006.18, 0, 0, -92.8, 1, 59),
(4, 2235.57, 1600.08, 1006.19, 0, 0, -89.9, 1, 59),
(5, 2225.39, 1587.8, 1006.18, 0, 0, 94.6, 1, 59),
(6, 2225.23, 1592.56, 1006.18, 0, 0, 88.1, 1, 59),
(7, 2235.47, 1599.75, 1006.19, 0, 0, -88.1999, 1, 0),
(8, 2236.27, 1608.6, 1006.18, 0, 0, 93.3, 1, 0),
(9, 2236.28, 1598.49, 1006.18, 0, 0, 90.4, 1, 0),
(10, 2246.37, 1616.99, 1006.18, 0, 0, -91.6, 1, 0),
(11, 2225.35, 1616.86, 1006.18, 0, 0, 88.2999, 1, 0),
(12, 2246.49, 1619.35, 1006.18, 0, 0, -90.1, 1, 59),
(13, 2246.46, 1614.34, 1006.18, 0, 0, -88.7, 1, 59),
(14, 2247.03, 1588.16, 1006.18, 0, 0, 92.7, 1, 59),
(15, 1946.96, 995.949, 992.461, 0, 0, -87.7, 10, 0),
(16, 2246.98, 1595.2, 1006.18, 0, 0, 89.8, 1, 59),
(17, 2235.63, 1604.24, 1006.19, 0, 0, -88.9999, 1, 59),
(18, 512.318, -80.9137, 998.961, 0, 0, -90.1001, 11, 0),
(19, 1934.28, 994.161, 992.469, 0, 0, 90.5, 10, 0),
(20, 1934.27, 992.175, 992.469, 0, 0, 88.6, 10, 0),
(21, 1951.35, 1025.23, 992.499, 0, 0, 89, 10, 0),
(22, 1925.04, 1051.47, 994.469, 0, 0, 89.7, 10, 0),
(23, 1925.07, 1055.41, 994.469, 0, 0, 87.9999, 10, 0),
(24, 2225.33, 1620.44, 1006.18, 0, 0, 92.6, 1, 0),
(25, 2225.18, 1594.85, 1006.18, 0, 0, 91.1, 1, 0),
(26, 2225.34, 1589.72, 1006.25, 0, 0, 86.8, 1, 0),
(27, 2246.39, 1612.53, 1006.19, 0, 0, -92.9, 1, 0),
(28, 2246.96, 1590.32, 1006.18, 0, 0, 89.7, 1, 0),
(29, 2246.94, 1593.79, 1006.18, 0, 0, 85.2, 1, 0),
(30, 2292.06, 1604.99, 1008.36, 0, 0, -93.1999, 1, 0),
(31, 1924.96, 1029.25, 994.469, 0, 0, 92.7001, 10, 1),
(32, 1924.99, 1031.47, 994.469, 0, 0, 91.6, 10, 1),
(33, 1924.97, 1027, 994.469, 0, 0, 88.2999, 10, 1),
(34, 1924.99, 1024.66, 994.469, 0, 0, 90.4999, 10, 1),
(35, 1925.02, 1009.06, 994.469, 0, 0, 87.1999, 10, 1),
(36, 1925.06, 1011.21, 994.469, 0, 0, 87.8998, 10, 1),
(37, 1925.05, 1013.55, 994.469, 0, 0, 89.5, 10, 1),
(38, 1925.02, 1015.79, 994.479, 0, 0, 88, 10, 1),
(39, 2235.57, 1609.59, 1006.19, 0, 0, -90.8, 1, 199),
(40, 2235.53, 1600.06, 1006.19, 0, 0, -89.7, 1, 199),
(41, 2246.46, 1618.36, 1006.18, 0, 0, -91.4, 1, 199),
(42, 2246.36, 1612.88, 1006.18, 0, 0, -90.8, 1, 199),
(43, 2247.02, 1589.19, 1006.18, 0, 0, 86.2999, 1, 199),
(44, 2247.05, 1595.38, 1006.18, 0, 0, 85.2001, 1, 199),
(45, 2225.29, 1589.07, 1006.18, 0, 0, 91.9, 1, 199),
(47, 2224.68, 1612.68, 1006.18, 0, 0, -85.7, 1, 199),
(48, 2224.54, 1618.62, 1006.18, 0, 0, -84.4, 1, 199),
(49, 2225.36, 1613.26, 1006.18, 0, 0, 91.6, 1, 59),
(50, 1934.06, 995.124, 992.301, 0, 0, 89.5999, 10, 99),
(51, 1934.01, 991.385, 992.211, 0.1, -0.8, 91.3999, 10, 99),
(52, -2647.84, 1419.45, 906.363, 0, 0, -49.4, 3, 11),
(53, -2647.08, 1418.55, 906.351, 0, 0, -51, 3, 11),
(54, -2658.14, 1423.77, 906.273, 0, 0, 0, 3, 11),
(55, -2657.13, 1423.78, 906.251, 0, 0, 0, 3, 11),
(56, -2664.17, 1423.8, 906.331, 0, 0, 0, 3, 11),
(57, -2663.36, 1423.8, 906.321, 0, 0, 0, 3, 11),
(58, -2650.8, 1396.94, 906.273, 0, 0, -178.2, 3, 11),
(59, -2651.77, 1396.92, 906.271, 0, 0, -179.9, 3, 11),
(60, -2669.85, 1396.95, 906.461, 0, 0, -178.2, 3, 11),
(61, -2670.82, 1396.94, 906.461, 0, 0, -178.6, 3, 11),
(62, -2660.11, 1398.91, 906.461, 0, 0, -179, 3, 11),
(63, -2661.59, 1398.92, 906.461, 0, 0, 180, 3, 11),
(64, 960.678, 3.80781, 1000.92, 0, 0, 0, 3, 1),
(65, 964.112, -0.374348, 1000.91, 0, 0, -87.6, 3, 1),
(66, 957.733, -0.602614, 1001.09, 0, 0, 93.0001, 3, 1);

-- --------------------------------------------------------

--
-- Table structure for table `socket`
--

CREATE TABLE `socket` (
  `SocketID` int(11) DEFAULT NULL,
  `SocketX` float DEFAULT NULL,
  `SocketY` float DEFAULT NULL,
  `SocketZ` float DEFAULT NULL,
  `SocketA` float DEFAULT NULL,
  `Interior` int(11) DEFAULT NULL,
  `World` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `socket`
--

INSERT INTO `socket` (`SocketID`, `SocketX`, `SocketY`, `SocketZ`, `SocketA`, `Interior`, `World`) VALUES
(0, 360.724, -2042.36, 7.33594, 447.935, 0, 0),
(1, 360.719, -2040.33, 7.33594, 448.461, 0, 0),
(2, 1681.72, 1454.04, 10.2727, 452.01, 0, 0),
(3, 2038.22, -1408.79, 16.6641, 269.175, 0, 0),
(4, 1538.62, -1661.1, 13.0469, 267.139, 0, 0),
(5, 283.793, 1828.84, 7.57565, 445.987, 0, 0),
(6, 1238.78, -2041.45, 59.3679, 447.316, 0, 0),
(7, 79.7126, -1608.65, 11.4315, 355.492, 0, 0),
(8, 225.96, 1865.65, 12.6406, 264.098, 0, 0),
(9, 2423.2, -1246.87, 23.3314, 363.685, 0, 0),
(10, 2424.96, -1246.87, 23.34, 363.79, 0, 0),
(11, 1694.8, -2334.6, 13.0469, 539.373, 0, 0),
(12, 1692.49, -2334.6, 13.0469, 539.373, 0, 0),
(13, 1664.6, -1722.58, 19.9844, 181.864, 0, 0),
(14, 614.623, -1686.1, 15.7365, 444.512, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `speedcameras`
--

CREATE TABLE `speedcameras` (
  `speedID` int(12) NOT NULL,
  `speedRange` float DEFAULT 0,
  `speedLimit` float DEFAULT 0,
  `speedX` float DEFAULT 0,
  `speedY` float DEFAULT 0,
  `speedZ` float DEFAULT 0,
  `speedAngle` float DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `speedcameras`
--

INSERT INTO `speedcameras` (`speedID`, `speedRange`, `speedLimit`, `speedX`, `speedY`, `speedZ`, `speedAngle`) VALUES
(7, 0, 80, 919.133, -1780.69, 13.546, 86.128),
(8, 0, 100, 602.601, -1731.6, 13.665, 260.23),
(9, 0, 80, 1202.93, -952.878, 42.924, 92.662),
(10, 0, 80, 1348.13, -1291.38, 13.471, 357.528),
(11, 0, 80, 1283.18, -1857.7, 13.539, 90.535),
(12, 0, 80, 1036.92, -2253.34, 13.163, 200.258),
(13, 0, 120, 1602.67, -1660.78, 28.66, 190.426),
(14, 0, 80, 2729.9, -1618.78, 13.019, 359.659),
(15, 0, 80, 1702.6, -476.372, 33.373, 189.558),
(16, 0, 120, 2891.57, -1229.08, 10.875, 13.846),
(17, 0, 120, 1799.71, 843.385, 10.632, 90.565),
(18, 0, 120, 1797.85, 2258.77, 5.211, 183.488),
(19, 0, 120, 1217.24, 1846.34, 6.703, 2.303),
(20, 0, 120, 797.38, 684.186, 11.552, 114.684),
(21, 0, 120, -1421.11, 802.92, 47.612, 312.198),
(22, 0, 80, -1904.58, -1365.15, 40.405, 159.366),
(23, 0, 120, -1168.33, -2859.47, 67.718, 270.902),
(24, 0, 80, -127.549, -975.198, 26.154, 224.806),
(25, 0, 80, -214.038, 224.942, 11.995, 155.549),
(26, 0, 80, 406.236, -604.981, 34.797, 157.705),
(27, 0, 120, 2715.86, 1635.3, 6.72, 174.856),
(28, 0, 80, 2139.32, 2010.55, 10.803, 358.685);

-- --------------------------------------------------------

--
-- Table structure for table `stuffs`
--

CREATE TABLE `stuffs` (
  `ID` int(11) DEFAULT 0,
  `policemoneyvault` int(11) DEFAULT 0,
  `pemerintahmoneyvault` int(11) DEFAULT 0,
  `emsmoneyvault` int(11) DEFAULT 0,
  `bengkelmoneyvault` int(11) DEFAULT 0,
  `restomoneyvault` int(11) DEFAULT 0,
  `gojekmoneyvault` int(11) DEFAULT 0,
  `transmoneyvault` int(11) DEFAULT 0,
  `globaltime_rusun` bigint(20) DEFAULT 0,
  `ShowroomStock` int(11) DEFAULT 0,
  `CraftingPassword` varchar(128) DEFAULT 'N/A'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `stuffs`
--

INSERT INTO `stuffs` (`ID`, `policemoneyvault`, `pemerintahmoneyvault`, `emsmoneyvault`, `bengkelmoneyvault`, `restomoneyvault`, `gojekmoneyvault`, `transmoneyvault`, `globaltime_rusun`, `ShowroomStock`, `CraftingPassword`) VALUES
(0, 1519551, 4602665, 4787300, 1292504, 872153, 200000, 95000, 1768359224, 106, 'KANCRAFT');

-- --------------------------------------------------------

--
-- Table structure for table `tags`
--

CREATE TABLE `tags` (
  `tagId` int(11) NOT NULL,
  `tagText` varchar(64) DEFAULT NULL,
  `tagFont` varchar(24) DEFAULT NULL,
  `tagCreated` varchar(24) DEFAULT NULL,
  `tagColor` int(10) UNSIGNED DEFAULT NULL,
  `tagFontsize` int(10) UNSIGNED DEFAULT NULL,
  `tagBold` int(10) UNSIGNED DEFAULT NULL,
  `tagOwner` int(10) UNSIGNED DEFAULT NULL,
  `tagPosx` float DEFAULT NULL,
  `tagPosy` float DEFAULT NULL,
  `tagPosz` float DEFAULT NULL,
  `tagRotx` float DEFAULT NULL,
  `tagRoty` float DEFAULT NULL,
  `tagRotz` float DEFAULT NULL,
  `tagExpired` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `toys`
--

CREATE TABLE `toys` (
  `Id` int(11) NOT NULL,
  `Owner` varchar(40) DEFAULT '',
  `Slot0_Model` int(11) DEFAULT 0,
  `Slot0_Bone` int(11) DEFAULT 0,
  `Slot0_Status` int(11) DEFAULT 0,
  `Slot0_XPos` float DEFAULT 0,
  `Slot0_YPos` float DEFAULT 0,
  `Slot0_ZPos` float DEFAULT 0,
  `Slot0_XRot` float DEFAULT 0,
  `Slot0_YRot` float DEFAULT 0,
  `Slot0_ZRot` float DEFAULT 0,
  `Slot0_XScale` float DEFAULT 0,
  `Slot0_YScale` float DEFAULT 0,
  `Slot0_ZScale` float DEFAULT 0,
  `Slot1_Model` int(11) DEFAULT 0,
  `Slot1_Bone` int(11) DEFAULT 0,
  `Slot1_Status` int(11) DEFAULT 0,
  `Slot1_XPos` float DEFAULT 0,
  `Slot1_YPos` float DEFAULT 0,
  `Slot1_ZPos` float DEFAULT 0,
  `Slot1_XRot` float DEFAULT 0,
  `Slot1_YRot` float DEFAULT 0,
  `Slot1_ZRot` float DEFAULT 0,
  `Slot1_XScale` float DEFAULT 0,
  `Slot1_YScale` float DEFAULT 0,
  `Slot1_ZScale` float DEFAULT 0,
  `Slot2_Model` int(11) DEFAULT 0,
  `Slot2_Bone` int(11) DEFAULT 0,
  `Slot2_Status` int(11) DEFAULT 0,
  `Slot2_XPos` float DEFAULT 0,
  `Slot2_YPos` float DEFAULT 0,
  `Slot2_ZPos` float DEFAULT 0,
  `Slot2_XRot` float DEFAULT 0,
  `Slot2_YRot` float DEFAULT 0,
  `Slot2_ZRot` float DEFAULT 0,
  `Slot2_XScale` float DEFAULT 0,
  `Slot2_YScale` float DEFAULT 0,
  `Slot2_ZScale` float DEFAULT 0,
  `Slot3_Model` int(11) DEFAULT 0,
  `Slot3_Bone` int(11) DEFAULT 0,
  `Slot3_Status` int(11) DEFAULT 0,
  `Slot3_XPos` float DEFAULT 0,
  `Slot3_YPos` float DEFAULT 0,
  `Slot3_ZPos` float DEFAULT 0,
  `Slot3_XRot` float DEFAULT 0,
  `Slot3_YRot` float DEFAULT 0,
  `Slot3_ZRot` float DEFAULT 0,
  `Slot3_XScale` float DEFAULT 0,
  `Slot3_YScale` float DEFAULT 0,
  `Slot3_ZScale` float DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `transferlogs`
--

CREATE TABLE `transferlogs` (
  `pID` int(11) NOT NULL,
  `Type` int(11) NOT NULL,
  `Value` int(11) NOT NULL,
  `TargetSender` varchar(32) NOT NULL DEFAULT '',
  `Date` varchar(64) NOT NULL DEFAULT ''
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `trans_brankas`
--

CREATE TABLE `trans_brankas` (
  `PID` int(11) DEFAULT 0,
  `ID` int(11) NOT NULL,
  `Item` varchar(64) NOT NULL DEFAULT '-',
  `Model` int(11) DEFAULT 0,
  `Quantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `trans_brankas`
--

INSERT INTO `trans_brankas` (`PID`, `ID`, `Item`, `Model`, `Quantity`) VALUES
(0, 1065, 'Besi', 19809, 1990),
(0, 1069, 'Tembaga', 11748, 2000),
(0, 1077, 'Kopi Kenangan', 19835, 300),
(0, 1078, 'Nasi Goreng', 2355, 300),
(0, 1082, 'Pure Oil', 3632, 518),
(0, 1083, 'Bandage', 11736, 12),
(0, 1084, 'Jerigen', 1650, 20),
(0, 1085, 'Alprazolam', 1241, 35);

-- --------------------------------------------------------

--
-- Table structure for table `trash`
--

CREATE TABLE `trash` (
  `ID` int(11) NOT NULL,
  `Model` int(11) DEFAULT 0,
  `Cooldown` int(11) DEFAULT 0,
  `Interior` int(11) DEFAULT 0,
  `World` int(11) DEFAULT 0,
  `PosX` float DEFAULT 0,
  `PosY` float DEFAULT 0,
  `PosZ` float DEFAULT 0,
  `RotX` float DEFAULT 0,
  `RotY` float DEFAULT 0,
  `RotZ` float DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `trash`
--

INSERT INTO `trash` (`ID`, `Model`, `Cooldown`, `Interior`, `World`, `PosX`, `PosY`, `PosZ`, `RotX`, `RotY`, `RotZ`) VALUES
(74, 1300, 0, 0, 0, 1022.41, 1680.57, -83.7005, 0, 0, 0),
(73, 1300, 300, 0, 0, 122.765, 1930.57, 18.5294, 0, 0, 0),
(72, 1300, 0, 0, 0, 1266.24, -1295.34, 1060.49, 0, 0, 0),
(71, 1344, 300, 0, 0, 1547.82, -1658.56, 13.2653, 0, 0, -89.3),
(70, 1300, 0, 0, 0, -2413.03, 505.211, 29.4381, 0, 0, 23.2),
(69, 1300, 0, 0, 0, 1181.13, -1333.31, 12.9317, -0.199998, -0.3, -92.5),
(68, 1300, 300, 0, 0, 328.082, 1836.07, 7.1074, 0, 0, 90),
(67, 1227, 0, 0, 0, -2172.44, 701.944, 53.5906, 0, 0, -90),
(66, 1300, 300, 0, 0, 2497.54, -1687.9, 12.8406, -0.900001, 0, 9.6),
(65, 1227, 300, 0, 0, 51.2451, 1225.47, 18.7604, 0, 0, -90),
(64, 1227, 300, 0, 0, 418.109, -1320.27, 14.7344, 0, 0, -60),
(63, 1300, 300, 0, 0, 1303.58, -1868.12, 13.0069, 0, 0, -88.7),
(62, 1300, 300, 0, 0, 2235.86, -1150.18, 25.1969, 0, 0, 0),
(61, 1300, 300, 0, 0, 2173.37, -1786.83, 12.9117, 0, 0, 0),
(60, 1300, 300, 0, 0, 2117.79, -1910.71, 12.9828, 0, 0, 0),
(59, 1300, 300, 0, 0, 1928.94, -1785.53, 12.9028, 0, 0, 0),
(58, 1300, 300, 0, 0, 595.985, -1497.3, 14.5432, 0, 0, 0),
(57, 1300, 0, 0, 0, -82.8607, -1183.88, 1.12, 0, 0, -24.1),
(56, 1300, 300, 0, 0, 2793.48, -1080.61, 30.0987, 0, 0, 0),
(55, 1300, 300, 0, 0, 2402.18, -1377.67, 23.6895, 0, 0, 0),
(54, 1300, 0, 0, 0, 1684.2, -1093.04, 23.4362, 0, 0, 45.9),
(53, 1300, 0, 0, 0, 1091.78, -1223.18, 15.1903, 0, 0, 0),
(52, 1300, 300, 0, 0, 651.122, -1873.01, 4.84093, 0, 0, 0),
(51, 1227, 300, 0, 0, 311.89, -1797.87, 4.39905, 0, 0, 178.8),
(50, 1300, 300, 0, 0, 153.413, -1967.22, 3.11344, 0, 0, 0),
(49, 1300, 0, 0, 0, 126.334, -1865.23, 2.37049, 0, 0, 0),
(48, 1300, 0, 0, 0, -1570.83, -2726.34, 48.0869, 0, 0, -33.7),
(47, 1300, 300, 0, 0, -2197, -2269.39, 30.015, 0, 0, 140.1),
(46, 1227, 0, 0, 0, -2118, -2476.14, 30.465, 0, 0, -131),
(45, 1227, 0, 0, 0, -566.135, -2361.63, 28.2135, 0, 0, -124.3),
(44, 1300, 0, 0, 0, -382.649, -1448.27, 25.1666, 0, 0, 0),
(43, 1300, 300, 0, 0, -438.361, -60.1532, 58.2541, 0, 0, 0),
(42, 1300, 300, 0, 0, 35.7934, -287.336, 1.46584, 0, 0, 0),
(41, 1300, 0, 0, 0, -57.727, 106.041, 2.46719, 0, 0, -36.9),
(40, 1300, 300, 0, 0, 256.317, -62.532, 0.958125, 0, 0, 0),
(39, 1300, 300, 0, 0, 1391.79, 290.64, 18.9569, 0, 0, -21.9),
(38, 1300, 0, 0, 0, 2584.86, 51.0834, 25.8961, 0, 0, 0),
(37, 1300, 300, 0, 0, 2355.68, -88.5847, 25.9044, 0, 0, 0),
(36, 1300, 300, 0, 0, 2291.14, 2774.5, 10.0803, 0, 0, 0),
(35, 1300, 0, 0, 0, 2188.25, 1805.19, 10.35, 0, 0, 0),
(34, 1300, 300, 0, 0, 2296.72, 946.726, 10.2003, 0, 0, 0),
(33, 1300, 0, 0, 0, 1676.47, 1301.99, 10.3703, 0, 0, 0),
(32, 1300, 0, 10, 0, 2480.91, 1679.99, -24.7164, 0, 0, 0),
(31, 1227, 0, 10, 0, 2549.84, 1662.07, -14.6435, 0, 0, -84.3998),
(30, 1227, 300, 0, 0, 313.466, 1144.03, 8.45481, 0, 0, 2.9),
(29, 1227, 300, 0, 0, 483.153, 1284.14, 9.12541, 0, 0, -25.1),
(28, 1300, 0, 0, 0, 638.966, 1679.1, 6.53218, 0, 0, -51.4999),
(27, 1227, 300, 0, 0, 490.675, 1522.26, 0.901486, 0, 0, 92.7999),
(26, 1227, 300, 0, 0, 287.851, 1381.74, 10.4359, 0, 0, -89.5),
(25, 1227, 300, 0, 0, 2.40381, 1363.1, 9.0371, 0, 0, -88.1),
(24, 1227, 300, 0, 0, -358.239, 1149.25, 19.563, 0, 0, 179.2),
(23, 1300, 0, 0, 0, -2865.35, 508.788, 4.25405, 0, 0, 0),
(22, 1300, 0, 0, 0, -2621.71, 1359.44, 6.4162, 0, 0, 0),
(21, 1300, 300, 0, 0, -2448.72, 755.467, 34.5419, 0, 0, 0),
(20, 1227, 0, 0, 0, -1731.14, 82.0497, 3.40956, 0, 0, 48.2),
(19, 1227, 300, 0, 0, 2190.05, -2280.47, 13.4155, 0, 0, -136.4),
(18, 1227, 0, 0, 0, -2329.89, 995.857, 50.7753, 0, 0, 91.4),
(10, 1300, 300, 0, 0, 670.696, -623.523, 15.6759, 0, 0, 0),
(16, 1300, 300, 0, 0, 871.374, -1216.22, 16.2765, 0, 0, -92.2),
(15, 1300, 0, 0, 0, -2022.86, 475.724, 34.5919, 0, 0, 89.5),
(14, 1227, 300, 0, 0, 1936.31, 172.562, 37.1419, 1, -0.1, -107.9),
(13, 1227, 300, 0, 0, 41.0016, 1138.8, 19.5931, 0, 0, -179.4),
(7, 1300, 300, 0, 0, 1661.53, -1692.46, 19.8871, 0, 0, 0),
(11, 1300, 300, 0, 0, 1533.65, 8.6514, 23.337, 0, 0, -78.3),
(17, 1300, 300, 0, 0, 2730.88, -2448.45, 13.055, 0, 0, 0),
(9, 1300, 300, 0, 0, 852.36, -2014.64, 12.3172, 0, 0, 0),
(8, 1300, 300, 0, 0, 375.857, -2067.29, 7.24593, 0, 0, 0),
(12, 1227, 0, 0, 0, -52.2606, -229.365, 5.27493, -0.8, 0, -178.1),
(6, 1300, 300, 0, 0, 1304.75, -901.234, 38.9282, 0, 0, 0),
(5, 1227, 300, 0, 0, 2867.12, -2013.37, 11.0215, 1.7, -0.400001, -90.4),
(4, 1300, -34, 0, 0, 1492.08, -1761.79, 13.1369, 0, 0, 0),
(3, 1227, 300, 0, 0, 2404.88, -1241.81, 23.6624, 0, 0, 88.4),
(2, 1227, 300, 0, 0, 1239.47, -2032.53, 59.8014, -0.800001, 0, 91.5001),
(1, 1227, 300, 0, 0, 1479.95, -2181.31, 13.4765, 1.8, 0.6, 89.9),
(0, 1300, 300, 0, 0, 1676.62, -2309.69, 12.9424, 0, 0, 0),
(76, 1300, 300, 0, 0, -72.9506, 1022.53, 19.0922, 0, 0, 0),
(77, 1300, 300, 0, 0, 379.502, -1351.4, 14.6266, 0, 0, 0),
(78, 1300, 300, 0, 0, -85.3252, 1030.23, 19.0711, 0, 0, 0),
(79, 1300, 300, 0, 0, 1124.11, -2040.91, 69.2309, 0, 0, 0),
(80, 1300, 300, 0, 0, 2354.57, -651.271, 127.455, 0, 0, 0),
(81, 1300, 300, 0, 0, 2289.75, 603.373, 10.1903, 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `tweetlogs`
--

CREATE TABLE `tweetlogs` (
  `Name` varchar(32) DEFAULT 'None',
  `UCP` varchar(64) DEFAULT 'None',
  `Text` varchar(128) DEFAULT 'None',
  `Time` varchar(255) DEFAULT 'None'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `tweetlogs`
--

INSERT INTO `tweetlogs` (`Name`, `UCP`, `Text`, `Time`) VALUES
('Zuqqi_Daneswara', 'ahmazuqi', 'tes', '2025-01-31 04:11:56'),
('Zuqqi_Daneswara', 'ahmazuqi', 'eoyyy', '2025-01-31 20:14:44'),
('Zuqqi_Daneswara', 'ahmazuqi', 'ror', '2025-02-05 11:39:46'),
('Farel_Hazem', 'Farel', 'tess', '2025-02-05 12:29:21');

-- --------------------------------------------------------

--
-- Table structure for table `tweets`
--

CREATE TABLE `tweets` (
  `ID` int(11) DEFAULT 1,
  `TwitterFrom` varchar(64) NOT NULL DEFAULT '-',
  `TwitterDate` varchar(64) DEFAULT '-',
  `TwitterText` varchar(128) DEFAULT '-'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `tweets`
--

INSERT INTO `tweets` (`ID`, `TwitterFrom`, `TwitterDate`, `TwitterText`) VALUES
(1, 'ahmazuqi', '2025/01/31 04:11:56', 'tes'),
(1, 'ahmazuqi', '2025/01/31 20:14:44', 'eoyyy'),
(1, 'ahmazuqi', '2025/02/05 18:39:46', 'ror'),
(1, 'FarelGanteng', '2025/02/05 19:29:21', 'tess');

-- --------------------------------------------------------

--
-- Table structure for table `uranium`
--

CREATE TABLE `uranium` (
  `ID` int(11) NOT NULL,
  `UraniumX` float DEFAULT NULL,
  `UraniumY` float DEFAULT NULL,
  `UraniumZ` float DEFAULT NULL,
  `UraniumRX` float DEFAULT NULL,
  `UraniumRY` float DEFAULT NULL,
  `UraniumRZ` float DEFAULT NULL,
  `Interior` tinyint(4) DEFAULT 0,
  `World` tinyint(4) DEFAULT 0,
  `Timer` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `uranium`
--

INSERT INTO `uranium` (`ID`, `UraniumX`, `UraniumY`, `UraniumZ`, `UraniumRX`, `UraniumRY`, `UraniumRZ`, `Interior`, `World`, `Timer`) VALUES
(0, -1120.46, -1627.58, 75.854, 0, 0, 0, 0, 0, 120),
(1, -1120.49, -1625.2, 75.8339, 0, 0, 0, 0, 0, 120),
(2, -1120.54, -1623.82, 75.8439, 0, 0, 0, 0, 0, 120),
(3, -1120.5, -1614.65, 75.8539, 0, 0, 0, 0, 0, 120),
(4, -1120.52, -1621.84, 75.864, 0, 0, 0, 0, 0, 120),
(5, -1120.51, -1619.11, 75.8539, 0, 0, 0, 0, 0, 120),
(6, -1120.54, -1616.88, 75.8639, 0, 0, 0, 0, 0, 120),
(7, -1117.47, -1614.56, 75.804, 0, 0, 0, 0, 0, 120),
(8, -1114.75, -1614.59, 75.7972, 0, 0, 0, 0, 0, 120),
(9, -1112.23, -1615.1, 75.7972, 0, 0, 0, 0, 0, 120),
(10, -1109.43, -1615.23, 75.8372, 0, 0, 0, 0, 0, 120),
(11, -1106.52, -1615.13, 75.8772, 0, 0, 0, 0, 0, 120),
(12, -1103.66, -1614.94, 75.8572, 0, 0, 0, 0, 0, 120),
(13, -1100.62, -1614.58, 75.8372, 0, 0, 0, 0, 0, 120),
(14, -1098.12, -1614.67, 75.8272, 0, 0, 0, 0, 0, 120),
(15, -1097.8, -1627.62, 75.8372, 0, 0, 0, 0, 0, 120),
(16, -1100.65, -1627.45, 75.8372, 0, 0, 0, 0, 0, 120),
(17, -1103.78, -1627.42, 75.8772, 0, 0, 0, 0, 0, 120),
(18, -1106.81, -1627.54, 75.8272, 0, 0, 0, 0, 0, 120),
(19, -1110.06, -1627.65, 75.8239, 0, 0, 0, 0, 0, 120),
(20, -1113.31, -1627.6, 75.8439, 0, 0, 0, 0, 0, 120),
(21, -1116.19, -1627.55, 75.8339, 0, 0, 0, 0, 0, 120),
(22, -1118.83, -1627.58, 75.8439, 0, 0, 0, 0, 0, 120),
(23, -1120.42, -1619.32, 75.7439, 0, 0, 0, 0, 0, 0),
(24, -1116.86, -1639.9, 75.8072, 0, 0, 0, 0, 0, 120),
(25, -1116.79, -1637.9, 75.7572, 0, 0, 0, 0, 0, 120),
(26, -1116.83, -1635.84, 75.8372, 0, 0, 0, 0, 0, 120),
(27, -1114.16, -1634.67, 75.8472, 0, 0, 0, 0, 0, 120),
(28, -1111.7, -1634.46, 75.8272, 0, 0, 0, 0, 0, 120),
(29, -1108.71, -1634.39, 75.8072, 0, 0, 0, 0, 0, 120),
(30, -1105.89, -1634.5, 75.8972, 0, 0, 0, 0, 0, 120);

-- --------------------------------------------------------

--
-- Table structure for table `vehicle_bagasi`
--

CREATE TABLE `vehicle_bagasi` (
  `vID` int(11) DEFAULT 0,
  `ID` int(11) NOT NULL,
  `Item` varchar(64) NOT NULL DEFAULT '-',
  `Model` int(11) DEFAULT 0,
  `Quantity` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `vehicle_object`
--

CREATE TABLE `vehicle_object` (
  `id` int(11) NOT NULL,
  `model` int(11) DEFAULT NULL,
  `toggle` int(11) DEFAULT 0,
  `color` varchar(24) DEFAULT NULL,
  `vehicle` int(11) DEFAULT NULL,
  `type` tinyint(4) DEFAULT NULL,
  `x` float DEFAULT NULL,
  `y` float DEFAULT NULL,
  `z` float DEFAULT NULL,
  `rx` float DEFAULT NULL,
  `ry` float DEFAULT NULL,
  `rz` float DEFAULT NULL,
  `text` varchar(32) DEFAULT 'Unknowns',
  `font` varchar(24) DEFAULT NULL,
  `fontcolor` int(11) DEFAULT NULL,
  `fontsize` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `voucher`
--

CREATE TABLE `voucher` (
  `VoucherID` int(11) DEFAULT NULL,
  `VoucherCode` varchar(50) DEFAULT NULL,
  `VoucherFee` int(11) DEFAULT 0,
  `VoucherTime` int(11) DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `warninglogs`
--

CREATE TABLE `warninglogs` (
  `pID` int(11) DEFAULT -1,
  `WarnType` int(11) DEFAULT 0,
  `WarnTime` bigint(20) DEFAULT 0,
  `WarnSender` varchar(64) DEFAULT NULL,
  `WarnReason` varchar(64) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `warrants`
--

CREATE TABLE `warrants` (
  `WarrantsID` int(11) NOT NULL,
  `ID` int(11) NOT NULL DEFAULT -1,
  `Date` varchar(64) NOT NULL DEFAULT 'N/A',
  `Reason` varchar(128) NOT NULL DEFAULT 'N/A',
  `Issuer` varchar(64) NOT NULL DEFAULT 'N/A'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `warung`
--

CREATE TABLE `warung` (
  `ShopID` int(11) DEFAULT -1,
  `ShopX` float DEFAULT 0,
  `ShopY` float DEFAULT 0,
  `ShopZ` float DEFAULT 0,
  `ShopInterior` int(11) DEFAULT NULL,
  `ShopWorld` int(11) DEFAULT NULL,
  `ShopType` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `warung`
--

INSERT INTO `warung` (`ShopID`, `ShopX`, `ShopY`, `ShopZ`, `ShopInterior`, `ShopWorld`, `ShopType`) VALUES
(0, 1310.21, -895.62, 39.6281, 0, 0, 1),
(1, 1741.42, -2494.35, 13.6069, 0, 0, 3),
(2, 1293.81, -1873.97, 13.674, 0, 0, 3),
(3, 1745.5, -2516.85, 20.2869, 0, 0, 2),
(4, 2408.89, -1387.56, 24.4842, 0, 0, 2),
(5, 41.8739, 1134.52, 19.7781, 0, 0, 1),
(7, 2113.54, -1919.97, 13.5996, 0, 0, 3),
(8, 69.5108, 1173.12, 18.6641, 0, 0, 3),
(9, 664.684, -613.592, 16.394, 0, 0, 3),
(6, 2300.66, 959.275, 10.9281, 0, 0, 1),
(10, 2529.22, -1516.67, 24.0181, 0, 0, 1),
(11, 825.897, -1464.24, 21.2663, 0, 0, 3);

-- --------------------------------------------------------

--
-- Table structure for table `weaponsettings`
--

CREATE TABLE `weaponsettings` (
  `Owner` int(11) NOT NULL,
  `WeaponID` tinyint(4) NOT NULL,
  `PosX` float DEFAULT -0.116,
  `PosY` float DEFAULT 0.189,
  `PosZ` float DEFAULT 0.088,
  `RotX` float DEFAULT 0,
  `RotY` float DEFAULT 44.5,
  `RotZ` float DEFAULT 0,
  `Bone` tinyint(4) DEFAULT 1,
  `Hidden` tinyint(4) DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `weapon_factions`
--

CREATE TABLE `weapon_factions` (
  `Owner_ID` int(11) NOT NULL,
  `Slot` int(11) NOT NULL,
  `Weapon` int(11) DEFAULT 0,
  `Ammo` int(11) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `weeds`
--

CREATE TABLE `weeds` (
  `ID` int(11) NOT NULL,
  `Type` int(11) DEFAULT 0,
  `Time` int(11) DEFAULT 0,
  `PosX` float DEFAULT 0,
  `PosY` float DEFAULT 0,
  `PosZ` float DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `weeds`
--

INSERT INTO `weeds` (`ID`, `Type`, `Time`, `PosX`, `PosY`, `PosZ`) VALUES
(15043, 3, 0, 0, 0, 0),
(34424, 0, 0, 0, 0, 0),
(41585, 0, 0, 0, 0, 0),
(42052, 0, 0, 0, 0, 0),
(49612, 0, 0, 0, 0, 0),
(52817, 0, 0, 0, 0, 0),
(52818, 0, 0, 0, 0, 0),
(52819, 0, 0, 0, 0, 0),
(54556, 0, 0, 0, 0, 0),
(74689, 0, 0, 0, 0, 0),
(85351, 3, 300, -310.266, -1414.34, 14.1484),
(85353, 3, 300, -308.612, -1412.07, 14.0524),
(85385, 3, 300, -309.347, -1397.98, 13.2122),
(85389, 1, 300, -315.88, -1402.89, 13.6323),
(85390, 1, 300, -315.748, -1401.28, 13.4948),
(85391, 1, 300, -315.516, -1399.27, 13.3227),
(85392, 1, 300, -315.341, -1397.23, 13.1488),
(85393, 1, 300, -315.117, -1395.26, 12.9803),
(85394, 1, 300, -314.951, -1393.23, 12.8066),
(85395, 1, 300, -314.823, -1391.1, 12.6243),
(85396, 1, 300, -314.609, -1389.34, 12.4138),
(85397, 1, 300, -314.472, -1387.2, 12.0683),
(85398, 1, 300, -314.639, -1385.23, 11.7732),
(85399, 1, 300, -316.226, -1385.05, 11.8691),
(85400, 1, 300, -316.518, -1387.37, 12.2554),
(85401, 1, 300, -316.596, -1389.4, 12.4786),
(85402, 1, 300, -316.723, -1392.05, 12.7056),
(85403, 1, 300, -316.844, -1393.59, 12.8374),
(85404, 1, 300, -316.919, -1395.59, 13.0088),
(85405, 1, 300, -316.954, -1398.15, 13.2277),
(85406, 1, 300, -317.225, -1400.07, 13.3917),
(85407, 1, 300, -317.501, -1402.63, 13.6103),
(85408, 2, 300, -313.23, -1402.94, 13.6364),
(85409, 2, 300, -313.294, -1400.49, 13.427),
(85410, 2, 300, -313.192, -1397.88, 13.2037),
(85411, 2, 300, -313.124, -1395.36, 12.9879),
(85412, 2, 300, -312.912, -1393.12, 12.7967),
(85413, 2, 300, -312.97, -1391.21, 12.5778),
(85414, 2, 299, -313.094, -1389.45, 12.3117),
(85415, 2, 300, -312.911, -1387.59, 12.0075),
(85416, 2, 300, -313.071, -1385.66, 11.7182),
(85417, 2, 300, -318.225, -1385, 12.0186),
(85418, 2, 300, -318.26, -1387.72, 12.3356),
(85419, 2, 300, -318.462, -1390.42, 12.5667),
(85420, 2, 300, -318.714, -1393.09, 12.7943),
(85421, 2, 300, -318.977, -1396.02, 13.0456),
(85422, 2, 300, -319.284, -1399.08, 13.3069),
(85423, 2, 300, -319.56, -1401.7, 13.5313),
(85424, 2, 300, -318.999, -1404.2, 13.7446),
(85425, 2, 300, -317.396, -1404.52, 13.7552),
(85426, 2, 300, -315.906, -1404.71, 13.7609),
(85427, 2, 300, -314.3, -1404.99, 13.7698),
(85428, 2, 300, -313.315, -1383.81, 11.447),
(85429, 2, 300, -314.892, -1383.73, 11.5588),
(85430, 2, 300, -316.802, -1383.61, 11.6898),
(85431, 2, 300, -319.573, -1385.67, 12.1607);

-- --------------------------------------------------------

--
-- Table structure for table `whatsapp_chats`
--

CREATE TABLE `whatsapp_chats` (
  `ID` int(11) DEFAULT NULL,
  `chatTimestamp` varchar(64) DEFAULT '-',
  `chatSender` varchar(64) DEFAULT '-',
  `chatMessage` varchar(128) DEFAULT '-',
  `SenderID` int(11) NOT NULL DEFAULT -1
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `workshop`
--

CREATE TABLE `workshop` (
  `ID` int(11) NOT NULL,
  `name` varchar(50) NOT NULL DEFAULT 'None',
  `leader` varchar(50) NOT NULL DEFAULT 'None',
  `price` int(11) NOT NULL DEFAULT 500000,
  `status` int(11) NOT NULL DEFAULT 1,
  `extposx` float DEFAULT 0,
  `extposy` float DEFAULT 0,
  `extposz` float DEFAULT 0,
  `extposa` float DEFAULT 0,
  `money` int(11) NOT NULL DEFAULT 0,
  `component` int(11) NOT NULL DEFAULT 0,
  `repairkid` int(12) NOT NULL DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `workshop`
--

INSERT INTO `workshop` (`ID`, `name`, `leader`, `price`, `status`, `extposx`, `extposy`, `extposz`, `extposa`, `money`, `component`, `repairkid`) VALUES
(0, 'No Name', 'Mile_West', 50000000, 1, 1093.77, -1753.99, 13.4419, 14.5276, 0, 0, 0),
(1, 'PELUPIS GARAGE', 'Zyenn_Antamasena', 5000, 0, 204.147, -1444.2, 13.2724, 53.5008, 1026290, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `yellowpages`
--

CREATE TABLE `yellowpages` (
  `ID` int(11) DEFAULT 1,
  `YellowDate` varchar(64) DEFAULT '-',
  `YellowFrom` varchar(64) DEFAULT '-',
  `YellowPhone` varchar(64) DEFAULT '-',
  `YellowText` varchar(128) DEFAULT '-'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `yellowpages`
--

INSERT INTO `yellowpages` (`ID`, `YellowDate`, `YellowFrom`, `YellowPhone`, `YellowText`) VALUES
(1, '2025/11/01 09:29:33', 'Levi Kayden', '081200116826', 'NEED SULTAN FULL MOD RATA KANAN '),
(1, '2025/11/01 14:08:31', 'Wafa Pelupis', '081266313062', 'NEED PLASTIK'),
(1, '2025/11/01 15:39:44', 'Klicok Buster', '081248232777', 'ned material, besi, kayu, pakaian sebanyak-banyaknya lsg telpon'),
(1, '2025/11/02 03:05:33', 'Levi Kayden', '081200116826', 'NEED BULLET'),
(1, '2025/11/02 03:49:41', 'Levi Kayden', '081200116826', 'NEED BULLET ATAU SULTAN FULL MOD RATA KANAN'),
(1, '2025/11/02 03:59:03', 'Noval Invectus', '081205846677', '[NEED]BESI/TEMBAGA/BERLIAN'),
(1, '2025/11/03 13:01:29', 'Morgan Holyness', '081257094164', 'SELL SULTAN UDAB BANYAK MODIF DAN MODIF NYA UNIK BANGET MINAT CELL GW'),
(1, '2025/11/03 14:02:03', 'Wafa Pelupis', '081266313062', 'NEED PLASTIK KU HARGAIN MAHAL'),
(1, '2025/11/03 17:34:39', 'Acong Ganjut', '081240475107', 'pada di mana bg'),
(1, '2025/11/03 17:34:47', 'Acong Ganjut', '081240475107', 'pada di mana bg'),
(1, '2025/11/03 17:34:56', 'Acong Ganjut', '081240475107', 'pada di mana bg'),
(1, '2025/11/03 18:05:12', 'Vin Cruz', '081249108122', 'mas coba telfon aku'),
(1, '2025/11/04 03:33:17', 'Gopal Gondrong', '081250210968', 'Info ojek dong bang aku id 3'),
(1, '2025/11/04 04:10:20', 'Vin Cruz', '081249108122', 'yg mau uang call me'),
(1, '2025/11/04 06:22:25', 'Vito Nakasima', '081210363476', 'NEED PEKERJA YANG MAU KERJA CALL GW'),
(1, '2025/11/04 07:49:39', 'David Nahmier', '081270888454', 'petot kauu di mn'),
(1, '2025/11/04 13:28:37', 'Levi Kayden', '081200116826', 'NEED BULLET OR SULTAN FULL MOD RATA KANAN'),
(1, '2025/11/04 14:52:17', 'Gustavo Daccosta', '081271329495', 'BUTUH TENAGA KERJA, YANG BISA CARI PLASTIK SEBANYAK MUNGKIN KAMI BAYAR 3/4/5K'),
(1, '2025/11/04 14:57:09', 'Gustavo Daccosta', '081271329495', 'NEED TENAGA KERJA, YANG ADA PLASTIK ATAU MAU KERJA SEBAGAI PENCARI PLASTIK SAYA SEWA MAHAL'),
(1, '2025/11/05 11:08:47', 'Mail Narendra', '081280158529', 'info kan mobil balap spec key oconer'),
(1, '2025/11/05 11:32:04', 'Morgan Holyness', '081257094164', 'SELL MOBIL SULTAN UDAH BANYAK MODIF PAN SENDIRI KALO MAU LIAT CELL GW KETEMUAN');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `actors`
--
ALTER TABLE `actors`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `atms`
--
ALTER TABLE `atms`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `badside_brankas`
--
ALTER TABLE `badside_brankas`
  ADD PRIMARY KEY (`fItemID`);

--
-- Indexes for table `bengkel_brankas`
--
ALTER TABLE `bengkel_brankas`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `bike_rentals`
--
ALTER TABLE `bike_rentals`
  ADD PRIMARY KEY (`RentID`);

--
-- Indexes for table `brankas_bengkel`
--
ALTER TABLE `brankas_bengkel`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `brankas_ems`
--
ALTER TABLE `brankas_ems`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `brankas_gojek`
--
ALTER TABLE `brankas_gojek`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `brankas_lounges`
--
ALTER TABLE `brankas_lounges`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `business`
--
ALTER TABLE `business`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `buttons`
--
ALTER TABLE `buttons`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `capres`
--
ALTER TABLE `capres`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `charges`
--
ALTER TABLE `charges`
  ADD PRIMARY KEY (`ChargesID`);

--
-- Indexes for table `contacts`
--
ALTER TABLE `contacts`
  ADD PRIMARY KEY (`contactID`);

--
-- Indexes for table `doors`
--
ALTER TABLE `doors`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `dropped`
--
ALTER TABLE `dropped`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `dynamic_rusun`
--
ALTER TABLE `dynamic_rusun`
  ADD PRIMARY KEY (`rID`);

--
-- Indexes for table `ems_brankas`
--
ALTER TABLE `ems_brankas`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `factiongarage`
--
ALTER TABLE `factiongarage`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `families`
--
ALTER TABLE `families`
  ADD PRIMARY KEY (`F_ID`);

--
-- Indexes for table `families_garage`
--
ALTER TABLE `families_garage`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `gate`
--
ALTER TABLE `gate`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `gudang`
--
ALTER TABLE `gudang`
  ADD PRIMARY KEY (`GudangID`);

--
-- Indexes for table `house`
--
ALTER TABLE `house`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `house_garkot`
--
ALTER TABLE `house_garkot`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `hunting`
--
ALTER TABLE `hunting`
  ADD PRIMARY KEY (`DeerID`);

--
-- Indexes for table `iconmaps`
--
ALTER TABLE `iconmaps`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `icons`
--
ALTER TABLE `icons`
  ADD PRIMARY KEY (`iconID`);

--
-- Indexes for table `inventory`
--
ALTER TABLE `inventory`
  ADD PRIMARY KEY (`invID`);

--
-- Indexes for table `invoices`
--
ALTER TABLE `invoices`
  ADD PRIMARY KEY (`invoiceID`);

--
-- Indexes for table `label_fivem`
--
ALTER TABLE `label_fivem`
  ADD PRIMARY KEY (`LabelID`);

--
-- Indexes for table `ladang`
--
ALTER TABLE `ladang`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `loglogin`
--
ALTER TABLE `loglogin`
  ADD PRIMARY KEY (`no`);

--
-- Indexes for table `lumbung`
--
ALTER TABLE `lumbung`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `objects`
--
ALTER TABLE `objects`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `objecttext`
--
ALTER TABLE `objecttext`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `pasar`
--
ALTER TABLE `pasar`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `pemerintah_brankas`
--
ALTER TABLE `pemerintah_brankas`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `playerucp`
--
ALTER TABLE `playerucp`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `player_bans`
--
ALTER TABLE `player_bans`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `player_characters`
--
ALTER TABLE `player_characters`
  ADD PRIMARY KEY (`pID`) USING BTREE,
  ADD KEY `Char_Admin` (`Char_Admin`);

--
-- Indexes for table `player_factionvehicle`
--
ALTER TABLE `player_factionvehicle`
  ADD PRIMARY KEY (`vID`);

--
-- Indexes for table `player_gudang`
--
ALTER TABLE `player_gudang`
  ADD PRIMARY KEY (`itemID`);

--
-- Indexes for table `player_housestorage`
--
ALTER TABLE `player_housestorage`
  ADD PRIMARY KEY (`hsItemID`);

--
-- Indexes for table `player_rusunstorage`
--
ALTER TABLE `player_rusunstorage`
  ADD PRIMARY KEY (`rsItemID`);

--
-- Indexes for table `player_vehicles`
--
ALTER TABLE `player_vehicles`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `polisi_brankas`
--
ALTER TABLE `polisi_brankas`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `public_garage`
--
ALTER TABLE `public_garage`
  ADD PRIMARY KEY (`pgID`);

--
-- Indexes for table `race_cps`
--
ALTER TABLE `race_cps`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `race_list`
--
ALTER TABLE `race_list`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `reports`
--
ALTER TABLE `reports`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `slotmachine`
--
ALTER TABLE `slotmachine`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `speedcameras`
--
ALTER TABLE `speedcameras`
  ADD PRIMARY KEY (`speedID`);

--
-- Indexes for table `tags`
--
ALTER TABLE `tags`
  ADD PRIMARY KEY (`tagId`);

--
-- Indexes for table `toys`
--
ALTER TABLE `toys`
  ADD PRIMARY KEY (`Id`);

--
-- Indexes for table `trans_brankas`
--
ALTER TABLE `trans_brankas`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `trash`
--
ALTER TABLE `trash`
  ADD PRIMARY KEY (`ID`) USING BTREE;

--
-- Indexes for table `uranium`
--
ALTER TABLE `uranium`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `vehicle_bagasi`
--
ALTER TABLE `vehicle_bagasi`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `vehicle_object`
--
ALTER TABLE `vehicle_object`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `warrants`
--
ALTER TABLE `warrants`
  ADD PRIMARY KEY (`WarrantsID`);

--
-- Indexes for table `weaponsettings`
--
ALTER TABLE `weaponsettings`
  ADD PRIMARY KEY (`Owner`,`WeaponID`),
  ADD UNIQUE KEY `Owner` (`Owner`,`WeaponID`);

--
-- Indexes for table `weapon_factions`
--
ALTER TABLE `weapon_factions`
  ADD PRIMARY KEY (`Owner_ID`,`Slot`);

--
-- Indexes for table `weeds`
--
ALTER TABLE `weeds`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `workshop`
--
ALTER TABLE `workshop`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `actors`
--
ALTER TABLE `actors`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT for table `badside_brankas`
--
ALTER TABLE `badside_brankas`
  MODIFY `fItemID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=347;

--
-- AUTO_INCREMENT for table `bengkel_brankas`
--
ALTER TABLE `bengkel_brankas`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=40;

--
-- AUTO_INCREMENT for table `capres`
--
ALTER TABLE `capres`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `charges`
--
ALTER TABLE `charges`
  MODIFY `ChargesID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `contacts`
--
ALTER TABLE `contacts`
  MODIFY `contactID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `dropped`
--
ALTER TABLE `dropped`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `ems_brankas`
--
ALTER TABLE `ems_brankas`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=76;

--
-- AUTO_INCREMENT for table `icons`
--
ALTER TABLE `icons`
  MODIFY `iconID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=15;

--
-- AUTO_INCREMENT for table `inventory`
--
ALTER TABLE `inventory`
  MODIFY `invID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `invoices`
--
ALTER TABLE `invoices`
  MODIFY `invoiceID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `loglogin`
--
ALTER TABLE `loglogin`
  MODIFY `no` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `objecttext`
--
ALTER TABLE `objecttext`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `pemerintah_brankas`
--
ALTER TABLE `pemerintah_brankas`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT for table `playerucp`
--
ALTER TABLE `playerucp`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2733;

--
-- AUTO_INCREMENT for table `player_bans`
--
ALTER TABLE `player_bans`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `player_characters`
--
ALTER TABLE `player_characters`
  MODIFY `pID` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `player_factionvehicle`
--
ALTER TABLE `player_factionvehicle`
  MODIFY `vID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `player_gudang`
--
ALTER TABLE `player_gudang`
  MODIFY `itemID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `player_housestorage`
--
ALTER TABLE `player_housestorage`
  MODIFY `hsItemID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `player_rusunstorage`
--
ALTER TABLE `player_rusunstorage`
  MODIFY `rsItemID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=14;

--
-- AUTO_INCREMENT for table `player_vehicles`
--
ALTER TABLE `player_vehicles`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `polisi_brankas`
--
ALTER TABLE `polisi_brankas`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT for table `race_cps`
--
ALTER TABLE `race_cps`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=65;

--
-- AUTO_INCREMENT for table `race_list`
--
ALTER TABLE `race_list`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `reports`
--
ALTER TABLE `reports`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `speedcameras`
--
ALTER TABLE `speedcameras`
  MODIFY `speedID` int(12) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=29;

--
-- AUTO_INCREMENT for table `tags`
--
ALTER TABLE `tags`
  MODIFY `tagId` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2316;

--
-- AUTO_INCREMENT for table `toys`
--
ALTER TABLE `toys`
  MODIFY `Id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `trans_brankas`
--
ALTER TABLE `trans_brankas`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1086;

--
-- AUTO_INCREMENT for table `vehicle_bagasi`
--
ALTER TABLE `vehicle_bagasi`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `vehicle_object`
--
ALTER TABLE `vehicle_object`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `warrants`
--
ALTER TABLE `warrants`
  MODIFY `WarrantsID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `weeds`
--
ALTER TABLE `weeds`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=85432;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
