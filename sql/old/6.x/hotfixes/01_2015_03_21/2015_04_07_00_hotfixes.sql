DROP TABLE IF EXISTS `battle_pet_species`;
CREATE TABLE IF NOT EXISTS `battle_pet_species` (
  `ID` INT(10) UNSIGNED NOT NULL DEFAULT '0',
  `CreatureID` INT(10) UNSIGNED NOT NULL DEFAULT '0',
  `IconFileID` INT(10) UNSIGNED NOT NULL DEFAULT '0',
  `SummonSpellID` INT(10) UNSIGNED NOT NULL DEFAULT '0',
  `PetType` INT(11) NOT NULL DEFAULT '0',
  `Source` INT(10) UNSIGNED NOT NULL DEFAULT '0',
  `Flags` INT(10) UNSIGNED NOT NULL DEFAULT '0',
  `SourceText` TEXT,
  `Description` TEXT,
  `VerifiedBuild` SMALLINT(6) NOT NULL DEFAULT '0'
) ENGINE=MYISAM DEFAULT CHARSET=utf8;

ALTER TABLE `battle_pet_species`
 ADD PRIMARY KEY (`ID`);
