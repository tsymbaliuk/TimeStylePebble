#include <pebble.h>
#include "languages.h"

/* day names in many different languages! */
const char dayNames[32][7][8] = {
	{"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"},
	{"DIM", "LUN", "MAR", "MER", "JEU", "VEN", "SAM"},
	{"SO",  "MO",  "DI",  "MI",  "DO",  "FR",  "SA"},
	{"DOM", "LUN", "MAR", "MIÉ", "JUE", "VIE", "SÁB"},
	{"DOM", "LUN", "MAR", "MER", "GIO", "VEN", "SAB"},
	{"ZO",  "MA",  "DI",  "WO",  "DO",  "VR",  "ZA"},
	{"PAZ", "PTS", "SAL", "ÇAR", "PER", "CUM", "CTS"},
	{"NE",  "PO",  "ÚT",  "ST",  "ČT",  "PÁ",  "SO"},
	{"DOM", "SEG", "TER", "QUA", "QUI", "SEX", "SÁB"},
	{"ΚΥΡ", "ΔΕΥ", "ΤΡΙ", "ΤΕΤ", "ΠΕΜ", "ΠΑΡ", "ΣΑΒ"},
	{"SÖN", "MÅN", "TIS", "ONS", "TOR", "FRE", "LÖR"},
	{"NDZ", "PON", "WTO", "ŚRO", "CZW", "PIĄ", "SOB"},
	{"NE", "PO", "UT", "ST", "ŠT", "PI", "SO"},
	{"CN", "T2", "T3", "T4", "T5", "T6", "T7"},
	{"DUM", "LUN", "MAR", "MIE", "JOI", "VIN", "SÂM"},
	{"DG", "DL", "DT", "DC", "DJ", "DV", "DS"},
	{"SØN", "MAN", "TIR", "ONS", "TOR", "FRE", "LØR"},
	{"ВС", "ПН", "ВТ", "СР", "ЧТ", "ПТ", "СБ"},
	{"P", "E", "T", "K", "N", "R", "L"},
	{"IG", "AL", "AR", "AZ", "OG", "OL", "LR"},
	{"SU", "MA", "TI", "KE", "TO", "PE", "LA"},
	{"SØN", "MAN", "TIR", "ONS", "TOR", "FRE", "LØR"},
	{"SEK", "PIR", "ANT", "TRE", "KET", "PEN", "ŠEŠ"},
	{"NED", "PON", "TOR", "SRE", "ČET", "PET", "SOB"},
	{"VAS", "HÉT", "KED", "SZE", "CSÜ", "PÉN", "SZO"},
	{"NED", "PON", "UTO", "SRE", "ČET", "PET", "SUB"},
	{"DOM", "LUA", "MÁI", "CÉA", "DÉA", "AOI", "SAT"},
	{"SVĒ", "PIR", "OTR", "TRE", "CET", "PIE", "SES"},
	{"NE", "PO", "UT", "SR", "ČE", "PE", "SU"},
	{"日", "一", "二", "三", "四", "五", "六"},
	{"MIN", "SEN",  "SEL", "RAB", "KAM", "JUM", "SAB"},
	{"НД", "ПН", "ВТ",  "СР", "ЧТ", "ПТ", "СБ"}	
};

/* month names in many different languages! */
const char monthNames[32][12][8] = {
	{"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"},
	{"JAN", "FÉV", "MAR", "AVR", "MAI", "JUI", "JUL", "AOÛ", "SEP", "OCT", "NOV", "DÉC"},
	{"JAN", "FEB", "MÄR", "APR", "MAI", "JUN", "JUL", "AUG", "SEP", "OKT", "NOV", "DEZ"},
	{"ENE", "FEB", "MAR", "ABR", "MAY", "JUN", "JUL", "AGO", "SEP", "OCT", "NOV", "DIC"},
	{"GEN", "FEB", "MAR", "APR", "MAG", "GIU", "LUG", "AGO", "SET", "OTT", "NOV", "DIC"},
	{"JAN", "FEB", "MRT", "APR", "MEI", "JUN", "JUL", "AUG", "SEP", "OKT", "NOV", "DEC"},
	{"OCA", "ŞUB", "MAR", "NİS", "MAY", "HAZ", "TEM", "AĞU", "EYL", "EKİ", "KAS", "ARA"},
	{"LED", "ÚNO", "BŘE", "DUB", "KVĚ", "ČRV", "ČVC", "SRP", "ZÁŘ", "ŘÍJ", "LIS", "PRO"},
	{"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"},
	{"ΙΑΝ", "ΦΕΒ", "ΜΑΡ", "ΑΠΡ", "ΜΑΪ", "ΙΟΝ", "ΙΟΛ", "ΑΥΓ", "ΣΕΠ", "ΟΚΤ", "ΝΟΕ", "ΔΕΚ"},
	{"JAN", "FEB", "MAR", "APR", "MAJ", "JUN", "JUL", "AUG", "SEP", "OKT", "NOV", "DEC"},
	{"STY", "LUT", "MAR", "KWI", "MAJ", "CZE", "LIP", "SIE", "WRZ", "PAŹ", "LIS", "GRU"},
	{"JAN", "FEB", "MAR", "APR", "MÁJ", "JÚN", "JÚL", "AUG", "SEP", "OKT", "NOV", "DEC"},
	{"Th1", "Th2", "Th3", "Th4", "Th5", "Th6", "Th7", "Th8", "Th9", "T10", "T11", "T12"},
	{"IAN", "FEB", "MAR", "APR", "MAI", "IUN", "IUL", "AUG", "SEP", "OCT", "NOI", "DEC"},
	{"GEN", "FEB", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OCT", "NOV", "DES"},
	{"JAN", "FEB", "MAR", "APR", "MAI", "JUN", "JUL", "AUG", "SEP", "OKT", "NOV", "DES"},
	{"ЯНВ", "ФЕВ", "МАР", "АПР", "МАЙ", "ИЮН", "ИЮЛ", "АВГ", "СЕН", "ОКТ", "НОЯ", "ДЕК"},
	{"JAN", "VEB", "MÄR", "APR", "MAI", "JUN", "JUL", "AUG", "SEP", "OKT", "NOV", "DET"},
	{"URT", "OTS", "MAR", "API", "MAI", "EKA", "UZT", "ABU", "IRA", "URR", "AZA", "ABE"},
	{"TAM", "HEL", "MAA", "HUH", "TOU", "KES", "HEI", "ELO", "SYY", "LOK", "MAR", "JOU"},
	{"JAN", "FEB", "MAR", "APR", "MAJ", "JUN", "JUL", "AUG", "SEP", "OKT", "NOV", "DEC"},
	{"SAU", "VAS", "KOV", "BAL", "GEG", "BIR", "LIE", "RUG", "RGS", "SPA", "LAP", "GRU"},
	{"JAN", "FEB", "MAR", "APR", "MAJ", "JUN", "JUL", "AVG", "SEP", "OKT", "NOV", "DEC"},
	{"JAN", "FEB", "MÁR", "ÁPR", "MÁJ", "JÚN", "JÚL", "AUG", "SZE", "OKT", "NOV", "DEC"},
  {"SIJ", "VEL", "OŽU", "TRA", "SVI", "LIP", "SRP", "KOL", "RUJ", "LIS", "STU", "PRO"},
	{"EAN", "FEA", "MÁR", "AIB", "BEA", "MEI", "IÚI", "LÚN", "MFÓ", "DFÓ", "SAM", "NOL"},
	{"JAN", "FEB", "MAR", "APR", "MAI", "JŪN", "JŪL", "AUG", "SEP", "OKT", "NOV", "DEC"},
  {"JAN", "FEB", "MAR", "APR", "MAJ", "JUN", "JUL", "AVG", "SEP", "OKT", "NOV", "DEC"},
	{"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"},
	{"JAN", "FEB", "MAR", "APR", "MEI", "JUN", "JUL", "AGU", "SEP", "OKT", "NOV", "DES"},
	{"СІЧ", "ЛЮТ", "БЕР", "КВІ", "ТРА", "ЧЕР", "ЛИП", "СЕР", "ВЕР", "ЖОВ", "ЛИС", "ГРУ"}
};

// all of these are taken from:
// http://www.unicode.org/cldr/charts/28/by_type/date_&_time.fields.html#521165cf49647551
const char wordForWeek[32][12] = {
	"Wk",
	"Sem",
	"W",
	"Sem",
	"Sett",
	"Wk",
	"Hf",
	"Týd",
	"Sem",
	"εβδ",
	"V",
	"Tydz",
	"Týž",
	"Tuần",
	"Săpt",
	"Setm",
	"Uke",
	"нед",
	"Näd",
	"Ast",
	"Vk",
	"Uge",
	"Sav",
	"Ted",
	"Hét",
	"Tj",
	"Scht",
	"Ned",
	"Ned",
	"周",
	"Ming",
	"Тиж"
};
