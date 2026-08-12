int __usercall _get_lc_time@<eax>(int *a1@<ecx>, int a2@<eax>)
{
  LCID v2; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  int v39; // edi
  int v40; // edi
  int v41; // edi
  int v42; // edi
  int v43; // edi
  int v44; // edi
  int v45; // edi
  int v46; // edi
  int v47; // edi
  int v48; // edi
  int v49; // edi
  int v50; // edi
  int v51; // edi
  int v52; // edi
  int v53; // edi
  int v54; // edi
  int v55; // edi
  int v56; // edi
  int v57; // edi
  int v58; // edi
  int v59; // edi
  int v60; // edi
  int v61; // edi
  int v62; // edi
  int v63; // edi
  int v64; // edi
  int v65; // edi
  int v66; // edi
  int v67; // edi
  int v68; // edi
  int v69; // edi
  int v70; // edi
  int v71; // edi
  int v72; // edi
  int v73; // edi
  int v74; // edi
  int v75; // edi
  int v76; // edi
  int v77; // edi
  int v78; // edi
  int v79; // edi
  int v80; // edi
  int v81; // edi
  int v82; // edi
  int v83; // edi
  int v84; // edi
  int v85; // edi
  int v86; // edi
  int v87; // edi
  int v88; // edi
  int v89; // edi
  int v90; // edi
  int v91[2]; // [esp+8h] [ebp-Ch] BYREF
  LCID Locale; // [esp+10h] [ebp-4h]

  v2 = *(unsigned __int16 *)(a2 + 66);
  Locale = *(unsigned __int16 *)(a2 + 68);
  if ( !a1 )
    return -1;
  v91[1] = 0;
  v91[0] = a2;
  v5 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x31u, a1 + 1);
  v6 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x32u, a1 + 2) | v5;
  v7 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x33u, a1 + 3) | v6;
  v8 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x34u, a1 + 4) | v7;
  v9 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x35u, a1 + 5) | v8;
  v10 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x36u, a1 + 6) | v9;
  v11 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x37u, a1) | v10;
  v12 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x2Au, a1 + 8) | v11;
  v13 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x2Bu, a1 + 9) | v12;
  v14 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x2Cu, a1 + 10) | v13;
  v15 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x2Du, a1 + 11) | v14;
  v16 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x2Eu, a1 + 12) | v15;
  v17 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x2Fu, a1 + 13) | v16;
  v18 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x30u, a1 + 7) | v17;
  v19 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x44u, a1 + 14) | v18;
  v20 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x45u, a1 + 15) | v19;
  v21 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x46u, a1 + 16) | v20;
  v22 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x47u, a1 + 17) | v21;
  v23 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x48u, a1 + 18) | v22;
  v24 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x49u, a1 + 19) | v23;
  v25 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x4Au, a1 + 20) | v24;
  v26 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x4Bu, a1 + 21) | v25;
  v27 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x4Cu, a1 + 22) | v26;
  v28 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x4Du, a1 + 23) | v27;
  v29 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x4Eu, a1 + 24) | v28;
  v30 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x4Fu, a1 + 25) | v29;
  v31 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x38u, a1 + 26) | v30;
  v32 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x39u, a1 + 27) | v31;
  v33 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x3Au, a1 + 28) | v32;
  v34 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x3Bu, a1 + 29) | v33;
  v35 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x3Cu, a1 + 30) | v34;
  v36 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x3Du, a1 + 31) | v35;
  v37 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x3Eu, a1 + 32) | v36;
  v38 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x3Fu, a1 + 33) | v37;
  v39 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x40u, a1 + 34) | v38;
  v40 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x41u, a1 + 35) | v39;
  v41 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x42u, a1 + 36) | v40;
  v42 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x43u, a1 + 37) | v41;
  v43 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x28u, a1 + 38) | v42;
  v44 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, v2, 0x29u, a1 + 39) | v43;
  v45 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, Locale, 0x1Fu, a1 + 40) | v44;
  v46 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, Locale, 0x20u, a1 + 41) | v45;
  v47 = __getlocaleinfo((struct localeinfo_struct *)v91, 1, Locale, 0x1003u, a1 + 42) | v46;
  v48 = __getlocaleinfo((struct localeinfo_struct *)v91, 0, Locale, 0x1009u, a1 + 44) | v47;
  a1[43] = Locale;
  v49 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x31u, a1 + 47) | v48;
  v50 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x32u, a1 + 48) | v49;
  v51 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x33u, a1 + 49) | v50;
  v52 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x34u, a1 + 50) | v51;
  v53 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x35u, a1 + 51) | v52;
  v54 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x36u, a1 + 52) | v53;
  v55 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x37u, a1 + 46) | v54;
  v56 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x2Au, a1 + 54) | v55;
  v57 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x2Bu, a1 + 55) | v56;
  v58 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x2Cu, a1 + 56) | v57;
  v59 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x2Du, a1 + 57) | v58;
  v60 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x2Eu, a1 + 58) | v59;
  v61 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x2Fu, a1 + 59) | v60;
  v62 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x30u, a1 + 53) | v61;
  v63 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x44u, a1 + 60) | v62;
  v64 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x45u, a1 + 61) | v63;
  v65 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x46u, a1 + 62) | v64;
  v66 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x47u, a1 + 63) | v65;
  v67 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x48u, a1 + 64) | v66;
  v68 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x49u, a1 + 65) | v67;
  v69 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x4Au, a1 + 66) | v68;
  v70 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x4Bu, a1 + 67) | v69;
  v71 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x4Cu, a1 + 68) | v70;
  v72 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x4Du, a1 + 69) | v71;
  v73 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x4Eu, a1 + 70) | v72;
  v74 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x4Fu, a1 + 71) | v73;
  v75 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x38u, a1 + 72) | v74;
  v76 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x39u, a1 + 73) | v75;
  v77 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x3Au, a1 + 74) | v76;
  v78 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x3Bu, a1 + 75) | v77;
  v79 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x3Cu, a1 + 76) | v78;
  v80 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x3Du, a1 + 77) | v79;
  v81 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x3Eu, a1 + 78) | v80;
  v82 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x3Fu, a1 + 79) | v81;
  v83 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x40u, a1 + 80) | v82;
  v84 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x41u, a1 + 81) | v83;
  v85 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x42u, a1 + 82) | v84;
  v86 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x43u, a1 + 83) | v85;
  v87 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x28u, a1 + 84) | v86;
  v88 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, v2, 0x29u, a1 + 85) | v87;
  v89 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, Locale, 0x1Fu, a1 + 86) | v88;
  v90 = __getlocaleinfo((struct localeinfo_struct *)v91, 2, Locale, 0x20u, a1 + 87) | v89;
  return v90 | __getlocaleinfo((struct localeinfo_struct *)v91, 2, Locale, 0x1003u, a1 + 88);
}
