void __thiscall sub_100968B0(_DWORD *this, const char *a2, int a3)
{
  unsigned __int16 v4; // ax
  int v5; // eax
  int v6; // edx
  unsigned int v7; // eax
  bool v8; // bl
  double v9; // st7
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // edi
  const char *v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // edi
  double v18; // st7
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int *v22; // ebx
  int v23; // edi
  double v24; // st7
  int v25; // eax
  unsigned int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // edi
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int *v33; // ebx
  int v34; // edi
  int v35; // [esp+18h] [ebp-50h]
  int v36; // [esp+1Ch] [ebp-4Ch]
  float v37; // [esp+30h] [ebp-38h]
  int v38; // [esp+34h] [ebp-34h]
  int v39; // [esp+38h] [ebp-30h]
  float v40; // [esp+38h] [ebp-30h]
  float v41; // [esp+3Ch] [ebp-2Ch]
  float v42; // [esp+3Ch] [ebp-2Ch]
  int v43; // [esp+3Ch] [ebp-2Ch]
  float v44; // [esp+3Ch] [ebp-2Ch]
  float v45; // [esp+3Ch] [ebp-2Ch]
  int v46; // [esp+50h] [ebp-18h]
  int v47; // [esp+54h] [ebp-14h]
  const char *v48; // [esp+60h] [ebp-8h] BYREF
  float v49; // [esp+64h] [ebp-4h]
  int v50; // [esp+70h] [ebp+8h]

  if ( !dword_10693788 )
  {
    sub_101811E0("ai_ally_speech_manager", -1);
    if ( dword_10693788 )
      sub_10260750(dword_10693788);
  }
  v48 = a2;
  v4 = sub_10095220(word_106938B8, (int)&v48);
  if ( v4 == 0xFFFF )
    goto LABEL_36;
  v5 = *(_DWORD *)(dword_106938BC + 16 * v4 + 12);
  if ( !v5 )
    goto LABEL_36;
  v6 = *(_DWORD *)(v5 + 32);
  if ( (v6 & 8) == 0
    || (v7 = this[1093], v7 == -1)
    || off_1061BE18[4 * (this[1093] & 0xFFF) + 2] != v7 >> 12
    || !off_1061BE18[4 * (this[1093] & 0xFFF) + 1] )
  {
    if ( (v6 & 0x10) != 0 )
    {
      v26 = this[1093];
      if ( v26 != -1
        && off_1061BE18[4 * (this[1093] & 0xFFF) + 2] == v26 >> 12
        && off_1061BE18[4 * (this[1093] & 0xFFF) + 1] )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 1656))(this);
        *(float *)&v50 = sub_100AC750(this) - *(float *)(dword_106B31C8 + 12);
        if ( *(_DWORD *)(dword_1069388C + 48) )
        {
          v27 = sub_10092E30(this);
          if ( (*(_DWORD *)(v27 + 252) & 0x800) != 0 )
            sub_100DAE60(v27);
          if ( (this[63] & 0x800) != 0 )
            sub_100DAE60(this);
          sub_1011C3A0((int)(this + 145), v27 + 580, 8.0, 0, 255, 0, 64, 1, *(float *)&v50);
        }
        v28 = sub_10092E30(this);
        if ( sub_100D7680(v28) )
        {
          v29 = *this;
          v44 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.0,
                  0.30000001,
                  0.5)
              + *(float *)&v50;
          v30 = sub_10092E30(this);
          v31 = sub_100D7680(v30);
          (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(v29 + 1808))(this, v31, 1.0, LODWORD(v44));
          v32 = sub_10092E30(this);
          v33 = (int *)sub_100D7680(v32);
          v34 = *v33;
          v45 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.2,
                  0.5,
                  0.69999999)
              + *(float *)&v50;
          (*(void (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(v34 + 1808))(v33, this, 1.0, LODWORD(v45));
        }
      }
    }
LABEL_36:
    this[1096] = -1;
    return;
  }
  v8 = strcmp(a2, "TLK_HELLO_NPC") == 0;
  (*(void (__thiscall **)(_DWORD *))(*this + 1656))(this);
  v9 = sub_100AC750(this);
  v10 = *(_DWORD *)(dword_1069388C + 48) == 0;
  v49 = v9 - *(float *)(dword_106B31C8 + 12);
  if ( !v10 )
  {
    v11 = sub_10092E30(this);
    v39 = sub_100D6390(v11);
    v38 = sub_100D6390(this);
    if ( v8 )
      Warning("Q&A: '%s' said Hello to '%s' (concept %s)\n", v38, v39, a2);
    else
      Warning("Q&A: '%s' questioned '%s' (concept %s)\n", v38, v39, a2);
    v12 = sub_10092E30(this);
    v13 = v12;
    if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
      sub_100DAE60(v12);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011C3A0((int)(this + 145), v13 + 580, 8.0, 0, 255, 0, 64, 1, v49);
  }
  v14 = "AnswerQuestionHello";
  if ( !v8 )
    v14 = "AnswerQuestion";
  v37 = v49 + 0.2;
  v36 = this[1098];
  v35 = (int)v14;
  v15 = sub_10092E30(this);
  sub_1010C6E0(v15, v35, v36, v46, v47, -1, 5, v37, (int)this, (int)this, 0);
  v16 = sub_10092E30(this);
  if ( sub_100D7680(v16) )
  {
    v17 = *this;
    v18 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.40000001,
            1.2,
            0.5);
    v41 = v18 + v49;
    v19 = sub_10092E30(this);
    v20 = sub_100D7680(v19);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(v17 + 1808))(this, v20, 1.0, LODWORD(v41));
    v21 = sub_10092E30(this);
    v22 = (int *)sub_100D7680(v21);
    v23 = *v22;
    v24 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.40000001,
            1.0,
            0.69999999);
    v42 = v24 + v49;
    (*(void (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD))(v23 + 1808))(v22, this, 1.0, LODWORD(v42));
  }
  v25 = sub_10092E30(this);
  v43 = sub_100D7680(v25);
  v40 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          10.0,
          20.0);
  sub_10092A80(v40, v43);
  this[1096] = -1;
}
