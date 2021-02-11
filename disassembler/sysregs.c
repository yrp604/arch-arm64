/* GENERATED FILE - DO NOT MODIFY - SUBMIT GITHUB ISSUE IF PROBLEM FOUND */

#include <stddef.h>

#include "sysregs.h"

const char* get_system_register_name(enum SystemReg sr)
{
	switch (sr)
	{
	case 32770:
		return "osdtrrx_el1";
	case 32772:
		return "dbgbvr0_el1";
	case 32773:
		return "dbgbcr0_el1";
	case 32774:
		return "dbgwvr0_el1";
	case 32775:
		return "dbgwcr0_el1";
	case 32780:
		return "dbgbvr1_el1";
	case 32781:
		return "dbgbcr1_el1";
	case 32782:
		return "dbgwvr1_el1";
	case 32783:
		return "dbgwcr1_el1";
	case 32784:
		return "mdccint_el1";
	case 32786:
		return "mdscr_el1";
	case 32788:
		return "dbgbvr2_el1";
	case 32789:
		return "dbgbcr2_el1";
	case 32790:
		return "dbgwvr2_el1";
	case 32791:
		return "dbgwcr2_el1";
	case 32794:
		return "osdtrtx_el1";
	case 32796:
		return "dbgbvr3_el1";
	case 32797:
		return "dbgbcr3_el1";
	case 32798:
		return "dbgwvr3_el1";
	case 32799:
		return "dbgwcr3_el1";
	case 32804:
		return "dbgbvr4_el1";
	case 32805:
		return "dbgbcr4_el1";
	case 32806:
		return "dbgwvr4_el1";
	case 32807:
		return "dbgwcr4_el1";
	case 32812:
		return "dbgbvr5_el1";
	case 32813:
		return "dbgbcr5_el1";
	case 32814:
		return "dbgwvr5_el1";
	case 32815:
		return "dbgwcr5_el1";
	case 32818:
		return "oseccr_el1";
	case 32820:
		return "dbgbvr6_el1";
	case 32821:
		return "dbgbcr6_el1";
	case 32822:
		return "dbgwvr6_el1";
	case 32823:
		return "dbgwcr6_el1";
	case 32828:
		return "dbgbvr7_el1";
	case 32829:
		return "dbgbcr7_el1";
	case 32830:
		return "dbgwvr7_el1";
	case 32831:
		return "dbgwcr7_el1";
	case 32836:
		return "dbgbvr8_el1";
	case 32837:
		return "dbgbcr8_el1";
	case 32838:
		return "dbgwvr8_el1";
	case 32839:
		return "dbgwcr8_el1";
	case 32844:
		return "dbgbvr9_el1";
	case 32845:
		return "dbgbcr9_el1";
	case 32846:
		return "dbgwvr9_el1";
	case 32847:
		return "dbgwcr9_el1";
	case 32852:
		return "dbgbvr10_el1";
	case 32853:
		return "dbgbcr10_el1";
	case 32854:
		return "dbgwvr10_el1";
	case 32855:
		return "dbgwcr10_el1";
	case 32860:
		return "dbgbvr11_el1";
	case 32861:
		return "dbgbcr11_el1";
	case 32862:
		return "dbgwvr11_el1";
	case 32863:
		return "dbgwcr11_el1";
	case 32868:
		return "dbgbvr12_el1";
	case 32869:
		return "dbgbcr12_el1";
	case 32870:
		return "dbgwvr12_el1";
	case 32871:
		return "dbgwcr12_el1";
	case 32876:
		return "dbgbvr13_el1";
	case 32877:
		return "dbgbcr13_el1";
	case 32878:
		return "dbgwvr13_el1";
	case 32879:
		return "dbgwcr13_el1";
	case 32884:
		return "dbgbvr14_el1";
	case 32885:
		return "dbgbcr14_el1";
	case 32886:
		return "dbgwvr14_el1";
	case 32887:
		return "dbgwcr14_el1";
	case 32892:
		return "dbgbvr15_el1";
	case 32893:
		return "dbgbcr15_el1";
	case 32894:
		return "dbgwvr15_el1";
	case 32895:
		return "dbgwcr15_el1";
	case 32900:
		return "oslar_el1";
	case 32924:
		return "osdlr_el1";
	case 32932:
		return "dbgprcr_el1";
	case 33734:
		return "dbgclaimset_el1";
	case 33742:
		return "dbgclaimclr_el1";
	case 34817:
		return "trctraceidr";
	case 34818:
		return "trcvictlr";
	case 34820:
		return "trcseqevr0";
	case 34821:
		return "trccntrldvr0";
	case 34823:
		return "trcimspec0";
	case 34824:
		return "trcprgctlr";
	case 34825:
		return "trcqctlr";
	case 34826:
		return "trcviiectlr";
	case 34828:
		return "trcseqevr1";
	case 34829:
		return "trccntrldvr1";
	case 34831:
		return "trcimspec1";
	case 34832:
		return "trcprocselr";
	case 34834:
		return "trcvissctlr";
	case 34836:
		return "trcseqevr2";
	case 34837:
		return "trccntrldvr2";
	case 34839:
		return "trcimspec2";
	case 34842:
		return "trcvipcssctlr";
	case 34845:
		return "trccntrldvr3";
	case 34847:
		return "trcimspec3";
	case 34848:
		return "trcconfigr";
	case 34853:
		return "trccntctlr0";
	case 34855:
		return "trcimspec4";
	case 34861:
		return "trccntctlr1";
	case 34863:
		return "trcimspec5";
	case 34864:
		return "trcauxctlr";
	case 34868:
		return "trcseqrstevr";
	case 34869:
		return "trccntctlr2";
	case 34871:
		return "trcimspec6";
	case 34876:
		return "trcseqstr";
	case 34877:
		return "trccntctlr3";
	case 34879:
		return "trcimspec7";
	case 34880:
		return "trceventctl0r";
	case 34882:
		return "trcvdctlr";
	case 34884:
		return "trcextinselr";
	case 34885:
		return "trccntvr0";
	case 34888:
		return "trceventctl1r";
	case 34890:
		return "trcvdsacctlr";
	case 34892:
		return "trcextinselr1";
	case 34893:
		return "trccntvr1";
	case 34896:
		return "trcrsr";
	case 34898:
		return "trcvdarcctlr";
	case 34900:
		return "trcextinselr2";
	case 34901:
		return "trccntvr2";
	case 34904:
		return "trcstallctlr";
	case 34908:
		return "trcextinselr3";
	case 34909:
		return "trccntvr3";
	case 34912:
		return "trctsctlr";
	case 34920:
		return "trcsyncpr";
	case 34928:
		return "trcccctlr";
	case 34936:
		return "trcbbctlr";
	case 34945:
		return "trcrsctlr16";
	case 34946:
		return "trcssccr0";
	case 34947:
		return "trcsspcicr0";
	case 34948:
		return "trcoslar";
	case 34953:
		return "trcrsctlr17";
	case 34954:
		return "trcssccr1";
	case 34955:
		return "trcsspcicr1";
	case 34960:
		return "trcrsctlr2";
	case 34961:
		return "trcrsctlr18";
	case 34962:
		return "trcssccr2";
	case 34963:
		return "trcsspcicr2";
	case 34968:
		return "trcrsctlr3";
	case 34969:
		return "trcrsctlr19";
	case 34970:
		return "trcssccr3";
	case 34971:
		return "trcsspcicr3";
	case 34976:
		return "trcrsctlr4";
	case 34977:
		return "trcrsctlr20";
	case 34978:
		return "trcssccr4";
	case 34979:
		return "trcsspcicr4";
	case 34980:
		return "trcpdcr";
	case 34984:
		return "trcrsctlr5";
	case 34985:
		return "trcrsctlr21";
	case 34986:
		return "trcssccr5";
	case 34987:
		return "trcsspcicr5";
	case 34992:
		return "trcrsctlr6";
	case 34993:
		return "trcrsctlr22";
	case 34994:
		return "trcssccr6";
	case 34995:
		return "trcsspcicr6";
	case 35000:
		return "trcrsctlr7";
	case 35001:
		return "trcrsctlr23";
	case 35002:
		return "trcssccr7";
	case 35003:
		return "trcsspcicr7";
	case 35008:
		return "trcrsctlr8";
	case 35009:
		return "trcrsctlr24";
	case 35010:
		return "trcsscsr0";
	case 35016:
		return "trcrsctlr9";
	case 35017:
		return "trcrsctlr25";
	case 35018:
		return "trcsscsr1";
	case 35024:
		return "trcrsctlr10";
	case 35025:
		return "trcrsctlr26";
	case 35026:
		return "trcsscsr2";
	case 35032:
		return "trcrsctlr11";
	case 35033:
		return "trcrsctlr27";
	case 35034:
		return "trcsscsr3";
	case 35040:
		return "trcrsctlr12";
	case 35041:
		return "trcrsctlr28";
	case 35042:
		return "trcsscsr4";
	case 35048:
		return "trcrsctlr13";
	case 35049:
		return "trcrsctlr29";
	case 35050:
		return "trcsscsr5";
	case 35056:
		return "trcrsctlr14";
	case 35057:
		return "trcrsctlr30";
	case 35058:
		return "trcsscsr6";
	case 35064:
		return "trcrsctlr15";
	case 35065:
		return "trcrsctlr31";
	case 35066:
		return "trcsscsr7";
	case 35072:
		return "trcacvr0";
	case 35073:
		return "trcacvr8";
	case 35074:
		return "trcacatr0";
	case 35075:
		return "trcacatr8";
	case 35076:
		return "trcdvcvr0";
	case 35077:
		return "trcdvcvr4";
	case 35078:
		return "trcdvcmr0";
	case 35079:
		return "trcdvcmr4";
	case 35088:
		return "trcacvr1";
	case 35089:
		return "trcacvr9";
	case 35090:
		return "trcacatr1";
	case 35091:
		return "trcacatr9";
	case 35104:
		return "trcacvr2";
	case 35105:
		return "trcacvr10";
	case 35106:
		return "trcacatr2";
	case 35107:
		return "trcacatr10";
	case 35108:
		return "trcdvcvr1";
	case 35109:
		return "trcdvcvr5";
	case 35110:
		return "trcdvcmr1";
	case 35111:
		return "trcdvcmr5";
	case 35120:
		return "trcacvr3";
	case 35121:
		return "trcacvr11";
	case 35122:
		return "trcacatr3";
	case 35123:
		return "trcacatr11";
	case 35136:
		return "trcacvr4";
	case 35137:
		return "trcacvr12";
	case 35138:
		return "trcacatr4";
	case 35139:
		return "trcacatr12";
	case 35140:
		return "trcdvcvr2";
	case 35141:
		return "trcdvcvr6";
	case 35142:
		return "trcdvcmr2";
	case 35143:
		return "trcdvcmr6";
	case 35152:
		return "trcacvr5";
	case 35153:
		return "trcacvr13";
	case 35154:
		return "trcacatr5";
	case 35155:
		return "trcacatr13";
	case 35168:
		return "trcacvr6";
	case 35169:
		return "trcacvr14";
	case 35170:
		return "trcacatr6";
	case 35171:
		return "trcacatr14";
	case 35172:
		return "trcdvcvr3";
	case 35173:
		return "trcdvcvr7";
	case 35174:
		return "trcdvcmr3";
	case 35175:
		return "trcdvcmr7";
	case 35184:
		return "trcacvr7";
	case 35185:
		return "trcacvr15";
	case 35186:
		return "trcacatr7";
	case 35187:
		return "trcacatr15";
	case 35200:
		return "trccidcvr0";
	case 35201:
		return "trcvmidcvr0";
	case 35202:
		return "trccidcctlr0";
	case 35210:
		return "trccidcctlr1";
	case 35216:
		return "trccidcvr1";
	case 35217:
		return "trcvmidcvr1";
	case 35218:
		return "trcvmidcctlr0";
	case 35226:
		return "trcvmidcctlr1";
	case 35232:
		return "trccidcvr2";
	case 35233:
		return "trcvmidcvr2";
	case 35248:
		return "trccidcvr3";
	case 35249:
		return "trcvmidcvr3";
	case 35264:
		return "trccidcvr4";
	case 35265:
		return "trcvmidcvr4";
	case 35280:
		return "trccidcvr5";
	case 35281:
		return "trcvmidcvr5";
	case 35296:
		return "trccidcvr6";
	case 35297:
		return "trcvmidcvr6";
	case 35312:
		return "trccidcvr7";
	case 35313:
		return "trcvmidcvr7";
	case 35716:
		return "trcitctrl";
	case 35782:
		return "trcclaimset";
	case 35790:
		return "trcclaimclr";
	case 35814:
		return "trclar";
	case 36864:
		return "teecr32_el1";
	case 36992:
		return "teehbr32_el1";
	case 38944:
		return "dbgdtr_el0";
	case 38952:
		return "dbgdtrtx_el0";
	case 41016:
		return "dbgvcr32_el2";
	case 49280:
		return "sctlr_el1";
	case 49281:
		return "actlr_el1";
	case 49282:
		return "cpacr_el1";
	case 49285:
		return "rgsr_el1";
	case 49286:
		return "gcr_el1";
	case 49297:
		return "trfcr_el1";
	case 49408:
		return "ttbr0_el1";
	case 49409:
		return "ttbr1_el1";
	case 49410:
		return "tcr_el1";
	case 49416:
		return "apiakeylo_el1";
	case 49417:
		return "apiakeyhi_el1";
	case 49418:
		return "apibkeylo_el1";
	case 49419:
		return "apibkeyhi_el1";
	case 49424:
		return "apdakeylo_el1";
	case 49425:
		return "apdakeyhi_el1";
	case 49426:
		return "apdbkeylo_el1";
	case 49427:
		return "apdbkeyhi_el1";
	case 49432:
		return "apgakeylo_el1";
	case 49433:
		return "apgakeyhi_el1";
	case 49664:
		return "spsr_el1";
	case 49665:
		return "elr_el1";
	case 49672:
		return "sp_el0";
	case 49680:
		return "spsel";
	case 49682:
		return "currentel";
	case 49683:
		return "pan";
	case 49684:
		return "uao";
	case 49712:
		return "icc_pmr_el1";
	case 49800:
		return "afsr0_el1";
	case 49801:
		return "afsr1_el1";
	case 49808:
		return "esr_el1";
	case 49817:
		return "errselr_el1";
	case 49825:
		return "erxctlr_el1";
	case 49826:
		return "erxstatus_el1";
	case 49827:
		return "erxaddr_el1";
	case 49829:
		return "erxpfgctl_el1";
	case 49830:
		return "erxpfgcdn_el1";
	case 49832:
		return "erxmisc0_el1";
	case 49833:
		return "erxmisc1_el1";
	case 49834:
		return "erxmisc2_el1";
	case 49835:
		return "erxmisc3_el1";
	case 49839:
		return "erxts_el1";
	case 49840:
		return "tfsr_el1";
	case 49841:
		return "tfsre0_el1";
	case 49920:
		return "far_el1";
	case 50080:
		return "par_el1";
	case 50376:
		return "pmscr_el1";
	case 50378:
		return "pmsicr_el1";
	case 50379:
		return "pmsirr_el1";
	case 50380:
		return "pmsfcr_el1";
	case 50381:
		return "pmsevfr_el1";
	case 50382:
		return "pmslatfr_el1";
	case 50383:
		return "pmsidr_el1";
	case 50384:
		return "pmblimitr_el1";
	case 50385:
		return "pmbptr_el1";
	case 50387:
		return "pmbsr_el1";
	case 50391:
		return "pmbidr_el1";
	case 50392:
		return "trblimitr_el1";
	case 50393:
		return "trbptr_el1";
	case 50394:
		return "trbbaser_el1";
	case 50395:
		return "trbsr_el1";
	case 50396:
		return "trbmar_el1";
	case 50398:
		return "trbtrg_el1";
	case 50417:
		return "pmintenset_el1";
	case 50418:
		return "pmintenclr_el1";
	case 50422:
		return "pmmir_el1";
	case 50448:
		return "mair_el1";
	case 50456:
		return "amair_el1";
	case 50464:
		return "lorsa_el1";
	case 50465:
		return "lorea_el1";
	case 50466:
		return "lorn_el1";
	case 50467:
		return "lorc_el1";
	case 50472:
		return "mpam1_el1";
	case 50473:
		return "mpam0_el1";
	case 50688:
		return "vbar_el1";
	case 50690:
		return "rmr_el1";
	case 50697:
		return "disr_el1";
	case 50753:
		return "icc_eoir0_el1";
	case 50755:
		return "icc_bpr0_el1";
	case 50756:
		return "icc_ap0r0_el1";
	case 50757:
		return "icc_ap0r1_el1";
	case 50758:
		return "icc_ap0r2_el1";
	case 50759:
		return "icc_ap0r3_el1";
	case 50760:
		return "icc_ap1r0_el1";
	case 50761:
		return "icc_ap1r1_el1";
	case 50762:
		return "icc_ap1r2_el1";
	case 50763:
		return "icc_ap1r3_el1";
	case 50777:
		return "icc_dir_el1";
	case 50781:
		return "icc_sgi1r_el1";
	case 50782:
		return "icc_asgi1r_el1";
	case 50783:
		return "icc_sgi0r_el1";
	case 50785:
		return "icc_eoir1_el1";
	case 50787:
		return "icc_bpr1_el1";
	case 50788:
		return "icc_ctlr_el1";
	case 50789:
		return "icc_sre_el1";
	case 50790:
		return "icc_igrpen0_el1";
	case 50791:
		return "icc_igrpen1_el1";
	case 50792:
		return "icc_seien_el1";
	case 50817:
		return "contextidr_el1";
	case 50820:
		return "tpidr_el1";
	case 50823:
		return "scxtnum_el1";
	case 50952:
		return "cntkctl_el1";
	case 53248:
		return "csselr_el1";
	case 55824:
		return "nzcv";
	case 55825:
		return "daifset";
	case 55829:
		return "dit";
	case 55830:
		return "ssbs";
	case 55831:
		return "tco";
	case 55840:
		return "fpcr";
	case 55841:
		return "fpsr";
	case 55848:
		return "dspsr_el0";
	case 55849:
		return "dlr_el0";
	case 56544:
		return "pmcr_el0";
	case 56545:
		return "pmcntenset_el0";
	case 56546:
		return "pmcntenclr_el0";
	case 56547:
		return "pmovsclr_el0";
	case 56548:
		return "pmswinc_el0";
	case 56549:
		return "pmselr_el0";
	case 56552:
		return "pmccntr_el0";
	case 56553:
		return "pmxevtyper_el0";
	case 56554:
		return "pmxevcntr_el0";
	case 56557:
		return "daifclr";
	case 56560:
		return "pmuserenr_el0";
	case 56563:
		return "pmovsset_el0";
	case 56962:
		return "tpidr_el0";
	case 56963:
		return "tpidrro_el0";
	case 56967:
		return "scxtnum_el0";
	case 56976:
		return "amcr_el0";
	case 56979:
		return "amuserenr_el0";
	case 56980:
		return "amcntenclr0_el0";
	case 56981:
		return "amcntenset0_el0";
	case 56984:
		return "amcntenclr1_el0";
	case 56985:
		return "amcntenset1_el0";
	case 56992:
		return "amevcntr00_el0";
	case 56993:
		return "amevcntr01_el0";
	case 56994:
		return "amevcntr02_el0";
	case 56995:
		return "amevcntr03_el0";
	case 57056:
		return "amevcntr10_el0";
	case 57057:
		return "amevcntr11_el0";
	case 57058:
		return "amevcntr12_el0";
	case 57059:
		return "amevcntr13_el0";
	case 57060:
		return "amevcntr14_el0";
	case 57061:
		return "amevcntr15_el0";
	case 57062:
		return "amevcntr16_el0";
	case 57063:
		return "amevcntr17_el0";
	case 57064:
		return "amevcntr18_el0";
	case 57065:
		return "amevcntr19_el0";
	case 57066:
		return "amevcntr110_el0";
	case 57067:
		return "amevcntr111_el0";
	case 57068:
		return "amevcntr112_el0";
	case 57069:
		return "amevcntr113_el0";
	case 57070:
		return "amevcntr114_el0";
	case 57071:
		return "amevcntr115_el0";
	case 57072:
		return "amevtyper10_el0";
	case 57073:
		return "amevtyper11_el0";
	case 57074:
		return "amevtyper12_el0";
	case 57075:
		return "amevtyper13_el0";
	case 57076:
		return "amevtyper14_el0";
	case 57077:
		return "amevtyper15_el0";
	case 57078:
		return "amevtyper16_el0";
	case 57079:
		return "amevtyper17_el0";
	case 57080:
		return "amevtyper18_el0";
	case 57081:
		return "amevtyper19_el0";
	case 57082:
		return "amevtyper110_el0";
	case 57083:
		return "amevtyper111_el0";
	case 57084:
		return "amevtyper112_el0";
	case 57085:
		return "amevtyper113_el0";
	case 57086:
		return "amevtyper114_el0";
	case 57087:
		return "amevtyper115_el0";
	case 57088:
		return "cntfrq_el0";
	case 57104:
		return "cntp_tval_el0";
	case 57105:
		return "cntp_ctl_el0";
	case 57106:
		return "cntp_cval_el0";
	case 57112:
		return "cntv_tval_el0";
	case 57113:
		return "cntv_ctl_el0";
	case 57114:
		return "cntv_cval_el0";
	case 57152:
		return "pmevcntr0_el0";
	case 57153:
		return "pmevcntr1_el0";
	case 57154:
		return "pmevcntr2_el0";
	case 57155:
		return "pmevcntr3_el0";
	case 57156:
		return "pmevcntr4_el0";
	case 57157:
		return "pmevcntr5_el0";
	case 57158:
		return "pmevcntr6_el0";
	case 57159:
		return "pmevcntr7_el0";
	case 57160:
		return "pmevcntr8_el0";
	case 57161:
		return "pmevcntr9_el0";
	case 57162:
		return "pmevcntr10_el0";
	case 57163:
		return "pmevcntr11_el0";
	case 57164:
		return "pmevcntr12_el0";
	case 57165:
		return "pmevcntr13_el0";
	case 57166:
		return "pmevcntr14_el0";
	case 57167:
		return "pmevcntr15_el0";
	case 57168:
		return "pmevcntr16_el0";
	case 57169:
		return "pmevcntr17_el0";
	case 57170:
		return "pmevcntr18_el0";
	case 57171:
		return "pmevcntr19_el0";
	case 57172:
		return "pmevcntr20_el0";
	case 57173:
		return "pmevcntr21_el0";
	case 57174:
		return "pmevcntr22_el0";
	case 57175:
		return "pmevcntr23_el0";
	case 57176:
		return "pmevcntr24_el0";
	case 57177:
		return "pmevcntr25_el0";
	case 57178:
		return "pmevcntr26_el0";
	case 57179:
		return "pmevcntr27_el0";
	case 57180:
		return "pmevcntr28_el0";
	case 57181:
		return "pmevcntr29_el0";
	case 57182:
		return "pmevcntr30_el0";
	case 57184:
		return "pmevtyper0_el0";
	case 57185:
		return "pmevtyper1_el0";
	case 57186:
		return "pmevtyper2_el0";
	case 57187:
		return "pmevtyper3_el0";
	case 57188:
		return "pmevtyper4_el0";
	case 57189:
		return "pmevtyper5_el0";
	case 57190:
		return "pmevtyper6_el0";
	case 57191:
		return "pmevtyper7_el0";
	case 57192:
		return "pmevtyper8_el0";
	case 57193:
		return "pmevtyper9_el0";
	case 57194:
		return "pmevtyper10_el0";
	case 57195:
		return "pmevtyper11_el0";
	case 57196:
		return "pmevtyper12_el0";
	case 57197:
		return "pmevtyper13_el0";
	case 57198:
		return "pmevtyper14_el0";
	case 57199:
		return "pmevtyper15_el0";
	case 57200:
		return "pmevtyper16_el0";
	case 57201:
		return "pmevtyper17_el0";
	case 57202:
		return "pmevtyper18_el0";
	case 57203:
		return "pmevtyper19_el0";
	case 57204:
		return "pmevtyper20_el0";
	case 57205:
		return "pmevtyper21_el0";
	case 57206:
		return "pmevtyper22_el0";
	case 57207:
		return "pmevtyper23_el0";
	case 57208:
		return "pmevtyper24_el0";
	case 57209:
		return "pmevtyper25_el0";
	case 57210:
		return "pmevtyper26_el0";
	case 57211:
		return "pmevtyper27_el0";
	case 57212:
		return "pmevtyper28_el0";
	case 57213:
		return "pmevtyper29_el0";
	case 57214:
		return "pmevtyper30_el0";
	case 57215:
		return "pmccfiltr_el0";
	case 57344:
		return "vpidr_el2";
	case 57349:
		return "vmpidr_el2";
	case 57472:
		return "sctlr_el2";
	case 57473:
		return "actlr_el2";
	case 57480:
		return "hcr_el2";
	case 57481:
		return "mdcr_el2";
	case 57482:
		return "cptr_el2";
	case 57483:
		return "hstr_el2";
	case 57487:
		return "hacr_el2";
	case 57489:
		return "trfcr_el2";
	case 57497:
		return "sder32_el2";
	case 57600:
		return "ttbr0_el2";
	case 57601:
		return "ttbr1_el2";
	case 57602:
		return "tcr_el2";
	case 57608:
		return "vttbr_el2";
	case 57610:
		return "vtcr_el2";
	case 57616:
		return "vncr_el2";
	case 57648:
		return "vsttbr_el2";
	case 57650:
		return "vstcr_el2";
	case 57728:
		return "dacr32_el2";
	case 57856:
		return "spsr_el2";
	case 57857:
		return "elr_el2";
	case 57864:
		return "sp_el1";
	case 57880:
		return "spsr_irq";
	case 57881:
		return "spsr_abt";
	case 57882:
		return "spsr_und";
	case 57883:
		return "spsr_fiq";
	case 57985:
		return "ifsr32_el2";
	case 57992:
		return "afsr0_el2";
	case 57993:
		return "afsr1_el2";
	case 58000:
		return "esr_el2";
	case 58003:
		return "vsesr_el2";
	case 58008:
		return "fpexc32_el2";
	case 58032:
		return "tfsr_el2";
	case 58112:
		return "far_el2";
	case 58116:
		return "hpfar_el2";
	case 58568:
		return "pmscr_el2";
	case 58640:
		return "mair_el2";
	case 58648:
		return "amair_el2";
	case 58656:
		return "mpamhcr_el2";
	case 58657:
		return "mpamvpmv_el2";
	case 58664:
		return "mpam2_el2";
	case 58672:
		return "mpamvpm0_el2";
	case 58673:
		return "mpamvpm1_el2";
	case 58674:
		return "mpamvpm2_el2";
	case 58675:
		return "mpamvpm3_el2";
	case 58676:
		return "mpamvpm4_el2";
	case 58677:
		return "mpamvpm5_el2";
	case 58678:
		return "mpamvpm6_el2";
	case 58679:
		return "mpamvpm7_el2";
	case 58880:
		return "vbar_el2";
	case 58882:
		return "rmr_el2";
	case 58889:
		return "vdisr_el2";
	case 58944:
		return "ich_ap0r0_el2";
	case 58945:
		return "ich_ap0r1_el2";
	case 58946:
		return "ich_ap0r2_el2";
	case 58947:
		return "ich_ap0r3_el2";
	case 58952:
		return "ich_ap1r0_el2";
	case 58953:
		return "ich_ap1r1_el2";
	case 58954:
		return "ich_ap1r2_el2";
	case 58955:
		return "ich_ap1r3_el2";
	case 58956:
		return "ich_vseir_el2";
	case 58957:
		return "icc_sre_el2";
	case 58968:
		return "ich_hcr_el2";
	case 58970:
		return "ich_misr_el2";
	case 58975:
		return "ich_vmcr_el2";
	case 58976:
		return "ich_lr0_el2";
	case 58977:
		return "ich_lr1_el2";
	case 58978:
		return "ich_lr2_el2";
	case 58979:
		return "ich_lr3_el2";
	case 58980:
		return "ich_lr4_el2";
	case 58981:
		return "ich_lr5_el2";
	case 58982:
		return "ich_lr6_el2";
	case 58983:
		return "ich_lr7_el2";
	case 58984:
		return "ich_lr8_el2";
	case 58985:
		return "ich_lr9_el2";
	case 58986:
		return "ich_lr10_el2";
	case 58987:
		return "ich_lr11_el2";
	case 58988:
		return "ich_lr12_el2";
	case 58989:
		return "ich_lr13_el2";
	case 58990:
		return "ich_lr14_el2";
	case 58991:
		return "ich_lr15_el2";
	case 59009:
		return "contextidr_el2";
	case 59010:
		return "tpidr_el2";
	case 59015:
		return "scxtnum_el2";
	case 59139:
		return "cntvoff_el2";
	case 59144:
		return "cnthctl_el2";
	case 59152:
		return "cnthp_tval_el2";
	case 59153:
		return "cnthp_ctl_el2";
	case 59154:
		return "cnthp_cval_el2";
	case 59160:
		return "cnthv_tval_el2";
	case 59161:
		return "cnthv_ctl_el2";
	case 59162:
		return "cnthv_cval_el2";
	case 59168:
		return "cnthvs_tval_el2";
	case 59169:
		return "cnthvs_ctl_el2";
	case 59170:
		return "cnthvs_cval_el2";
	case 59176:
		return "cnthps_tval_el2";
	case 59177:
		return "cnthps_ctl_el2";
	case 59178:
		return "cnthps_cval_el2";
	case 59520:
		return "sctlr_el12";
	case 59522:
		return "cpacr_el12";
	case 59537:
		return "trfcr_el12";
	case 59648:
		return "ttbr0_el12";
	case 59649:
		return "ttbr1_el12";
	case 59650:
		return "tcr_el12";
	case 59904:
		return "spsr_el12";
	case 59905:
		return "elr_el12";
	case 60040:
		return "afsr0_el12";
	case 60041:
		return "afsr1_el12";
	case 60048:
		return "esr_el12";
	case 60080:
		return "tfsr_el12";
	case 60160:
		return "far_el12";
	case 60616:
		return "pmscr_el12";
	case 60688:
		return "mair_el12";
	case 60696:
		return "amair_el12";
	case 60712:
		return "mpam1_el12";
	case 60928:
		return "vbar_el12";
	case 61057:
		return "contextidr_el12";
	case 61063:
		return "scxtnum_el12";
	case 61192:
		return "cntkctl_el12";
	case 61200:
		return "cntp_tval_el02";
	case 61201:
		return "cntp_ctl_el02";
	case 61202:
		return "cntp_cval_el02";
	case 61208:
		return "cntv_tval_el02";
	case 61209:
		return "cntv_ctl_el02";
	case 61210:
		return "cntv_cval_el02";
	case 61568:
		return "sctlr_el3";
	case 61569:
		return "actlr_el3";
	case 61576:
		return "scr_el3";
	case 61577:
		return "sder32_el3";
	case 61578:
		return "cptr_el3";
	case 61593:
		return "mdcr_el3";
	case 61696:
		return "ttbr0_el3";
	case 61698:
		return "tcr_el3";
	case 61952:
		return "spsr_el3";
	case 61953:
		return "elr_el3";
	case 61960:
		return "sp_el2";
	case 62088:
		return "afsr0_el3";
	case 62089:
		return "afsr1_el3";
	case 62096:
		return "esr_el3";
	case 62128:
		return "tfsr_el3";
	case 62208:
		return "far_el3";
	case 62736:
		return "mair_el3";
	case 62744:
		return "amair_el3";
	case 62760:
		return "mpam3_el3";
	case 62976:
		return "vbar_el3";
	case 62978:
		return "rmr_el3";
	case 63076:
		return "icc_ctlr_el3";
	case 63077:
		return "icc_sre_el3";
	case 63079:
		return "icc_igrpen1_el3";
	case 63106:
		return "tpidr_el3";
	case 63111:
		return "scxtnum_el3";
	case 65296:
		return "cntps_tval_el1";
	case 65297:
		return "cntps_ctl_el1";
	case 65298:
		return "cntps_cval_el1";
	case 65299:
		return "spsel";
	case 65300:
		return "unknown_catchall";
	default:
		return "";
	}
}

const char* get_system_register_name_decomposed(int op0, int op1, int CRn, int CRm, int op2)
{
	enum SystemReg sr = (enum SystemReg)((op0 << 14) | (op1 << 11) | (CRn << 7) | (CRm << 3) | op2);
	return get_system_register_name(sr);
}
