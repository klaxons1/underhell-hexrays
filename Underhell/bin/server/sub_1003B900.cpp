int __thiscall sub_1003B900(int *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // eax
  char *v5; // eax
  int v6; // edi
  char *v7; // eax
  int v8; // edi
  char v9; // al
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // eax
  int v13; // eax
  char v14; // al
  const char *v15; // eax
  int v16; // eax
  int i; // ebx
  _DWORD *v18; // eax
  char v19; // al
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  const char *v23; // eax
  int v24; // eax
  char v25; // cl
  int v26; // ebx
  int v27; // eax
  char v28; // al
  int v29; // eax
  const char *v30; // eax
  int v31; // eax
  const char *v32; // eax
  int v33; // eax
  int v34; // eax
  double v35; // st7
  char *v36; // eax
  char *v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  long double v42; // st7
  char *v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  int v46; // ecx
  char *v47; // ecx
  int v48; // ecx
  int v49; // eax
  char v50; // al
  double v52; // [esp+10h] [ebp-450h]
  double v53; // [esp+24h] [ebp-43Ch]
  int v54; // [esp+34h] [ebp-42Ch]
  int v55; // [esp+3Ch] [ebp-424h]
  int v56; // [esp+3Ch] [ebp-424h]
  double v57; // [esp+3Ch] [ebp-424h]
  char v58; // [esp+44h] [ebp-41Ch]
  char Buffer[256]; // [esp+4Ch] [ebp-414h] BYREF
  char v60[256]; // [esp+14Ch] [ebp-314h] BYREF
  char Destination[512]; // [esp+24Ch] [ebp-214h] BYREF
  float v62[3]; // [esp+44Ch] [ebp-14h] BYREF
  const char *v63; // [esp+458h] [ebp-8h]
  char ArgList[4]; // [esp+45Ch] [ebp-4h]

  v2 = sub_100C0140();
  if ( (this[59] & 0x80000) != 0 )
  {
    sub_10429A00(Destination, 0x200u, "Health: %i", this[55]);
    sub_100D5DE0(v2, (int)Destination, 0.0, 255, 255, 255, 255);
    v3 = v2 + 1;
    sub_104299C0(Destination, "Squad: ", 0x200u);
    v4 = this[699];
    if ( v4 )
    {
      v5 = *(char **)(v4 + 4);
      if ( !v5 )
        v5 = (char *)String;
      sub_10429750((int)Destination, v5, 512, -1);
      if ( (int *)sub_100B1470(this[699]) == this )
        sub_10429750((int)Destination, " (LEADER)", 512, -1);
      sub_10429750((int)Destination, "\n", 512, -1);
    }
    else
    {
      sub_10429750((int)Destination, " - \n", 512, -1);
    }
    sub_100D5DE0(v3, (int)Destination, 0.0, 255, 255, 255, 255);
    v6 = v3 + 1;
    sub_104299C0(Destination, "Enemy: ", 0x200u);
    if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 368))(this) + 260) )
      {
        v7 = *(char **)((*(int (__thiscall **)(int *))(*this + 368))(this) + 260);
        if ( !v7 )
          v7 = (char *)String;
      }
      else
      {
        v7 = *(char **)((*(int (__thiscall **)(int *))(*this + 368))(this) + 92);
        if ( !v7 )
          v7 = (char *)String;
      }
      sub_10429750((int)Destination, v7, 512, -1);
      sub_10429750((int)Destination, "\n", 512, -1);
    }
    else
    {
      sub_10429750((int)Destination, " - \n", 512, -1);
    }
    sub_100D5DE0(v6, (int)Destination, 0.0, 255, 255, 255, 255);
    v8 = v6 + 1;
    v9 = (*(int (__thiscall **)(int *, int))(*this + 1908))(this, this[701]);
    sub_10429A00(Destination, 0x200u, "Slot:  %s (%d)\n", v9);
    sub_100D5DE0(v8, (int)Destination, 0.0, 255, 255, 255, 255);
    v2 = v8 + 1;
  }
  if ( (this[59] & 1) == 0 )
    return v2;
  sub_10429A00(Destination, 0x200u, "Health: %i  (DACC:%1.2f)", this[55]);
  sub_100D5DE0(v2, (int)Destination, 0.0, 255, 255, 255, 255);
  v10 = this[581];
  v11 = v2 + 1;
  if ( v10 < 7 )
  {
    sub_10429A00(Destination, 0x200u, "Stat: %s, ", *(_DWORD *)&::ArgList[4 * v10]);
    sub_100D5DE0(v11++, (int)Destination, 0.0, 255, 255, 255, 255);
  }
  if ( *((_BYTE *)this + 2680) )
  {
    sub_10429A00(Destination, 0x200u, "STARTSCRIPTING", v58);
    sub_100D5DE0(v11++, (int)Destination, 0.0, 255, 255, 255, 255);
  }
  if ( this[702] )
  {
    sub_10429A00(Destination, 0x200u, "Hint Group: %s", this[702]);
    sub_100D5DE0(v11++, (int)Destination, 0.0, 255, 255, 255, 255);
  }
  v12 = *(_DWORD *)(this[647] + 12) + 1;
  if ( v12 < 5 )
  {
    sub_10429A00(Destination, 0x200u, "Move: %s, ", *(_DWORD *)&off_105FE858[4 * v12]);
    sub_100D5DE0(v11++, (int)Destination, 0.0, 255, 255, 255, 255);
  }
  if ( this[531] )
  {
    v13 = (*(int (__thiscall **)(int *))(*this + 1364))(this);
    if ( v13 )
    {
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 16))(v13);
      sub_10429A00(Destination, 0x200u, "Behv: %s, ", v14);
      sub_100D5DE0(v11++, (int)Destination, 0.0, 255, 255, 255, 255);
    }
    v15 = *(const char **)(this[531] + 44);
    if ( !v15 )
      v15 = "Unknown";
    sub_10429A00(Destination, 0x200u, "Schd: %s, ", (char)v15);
    sub_100D5DE0(v11++, (int)Destination, 0.0, 255, 255, 255, 255);
    if ( (this[59] & 0x100000) != 0 )
    {
      v16 = this[531];
      for ( i = 0; i < *(_DWORD *)(v16 + 8); ++v11 )
      {
        if ( i == this[533] )
          v63 = "->";
        else
          v63 = "   ";
        *(float *)ArgList = COERCE_FLOAT("Task:");
        if ( i )
          *(float *)ArgList = COERCE_FLOAT("       ");
        (*(void (__thiscall **)(int *, _DWORD))(*this + 1316))(this, *(_DWORD *)(*(_DWORD *)(v16 + 4) + 8 * i));
        sub_10429A00(Destination, 0x200u, "%s%s%s%s", ArgList[0]);
        sub_100D5DE0(v11, (int)Destination, 0.0, 255, 255, 255, 255);
        v16 = this[531];
        ++i;
      }
    }
    else
    {
      v18 = (_DWORD *)sub_10043EC0(this);
      if ( v18 )
      {
        v19 = (*(int (__thiscall **)(int *, _DWORD))(*this + 1316))(this, *v18);
        sub_10429A00(Destination, 0x200u, "Task: %s (#%d), ", v19);
      }
      else
      {
        sub_104299C0(Destination, "Task: None", 0x200u);
      }
      sub_100D5DE0(v11++, (int)Destination, 0.0, 255, 255, 255, 255);
    }
  }
  v20 = this[593];
  if ( v20 != -1 && this[595] != -1 )
  {
    if ( v20 )
    {
      v21 = sub_10039AE0(this, v20, 0);
      v22 = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 936))(this, this[595], 0);
      *(float *)ArgList = COERCE_FLOAT((*(int (__thiscall **)(int *, int))(*this + 932))(this, v22));
      LOBYTE(v21) = (unsigned __int8)sub_10008F90(v21);
      v23 = sub_10008F90(*(int *)ArgList);
      v54 = this[593];
      *(float *)ArgList = *(float *)&v23;
      sub_10008F90(v54);
      sub_10429A00(Destination, 0x200u, "Actv: %s (%s) [%s]\n", v21);
      goto LABEL_53;
    }
    goto LABEL_51;
  }
  if ( !v20 )
  {
LABEL_51:
    sub_104299C0(Destination, "Actv: RESET", 0x200u);
    goto LABEL_53;
  }
  sub_104299C0(Destination, "Actv: INVALID", 0x200u);
LABEL_53:
  sub_100D5DE0(v11, (int)Destination, 0.0, 255, 255, 255, 255);
  v2 = v11 + 1;
  if ( (this[59] & 0x40000) != 0 )
  {
    v24 = 1;
    v25 = 0;
    v26 = 0;
    *(_DWORD *)ArgList = 1;
    do
    {
      if ( (v24 & this[(v26 >> 5) + 548]) != 0 )
      {
        if ( v26 == -1 )
          v27 = -1;
        else
          v27 = v26 + 1000000000;
        v28 = (*(int (__thiscall **)(int *, int))(*this + 1388))(this, v27);
        sub_10429A00(Destination, 0x200u, "Cond: %s\n", v28);
        sub_100D5DE0(v2, (int)Destination, 0.0, 255, 255, 255, 255);
        v24 = *(_DWORD *)ArgList;
        ++v2;
        v25 = 1;
      }
      ++v26;
      v24 = __ROL4__(v24, 1);
      *(float *)ArgList = *(float *)&v24;
    }
    while ( v26 < 256 );
    if ( !v25 )
    {
      sub_10429A00(Destination, 0x200u, "(no conditions)", this[55]);
      sub_100D5DE0(v2++, (int)Destination, 0.0, 255, 255, 255, 255);
    }
  }
  if ( (this[64] & 0x400) != 0 )
    sub_100D5DE0(v2++, (int)"HAS FL_FLY", 0.0, 255, 255, 255, 255);
  v29 = this[891];
  if ( v29 )
  {
    v30 = *(const char **)(v29 + 44);
    if ( !v30 )
      v30 = "Unknown";
    sub_10429A00(Destination, 0x200u, "Intr: %s (%s)\n", (char)v30);
    sub_100D5DE0(v2++, (int)Destination, 0.0, 255, 255, 255, 255);
  }
  v31 = this[890];
  if ( v31 )
  {
    v32 = *(const char **)(v31 + 44);
    if ( !v32 )
      v32 = "Unknown";
    sub_10429A00(Destination, 0x200u, "Fail: %s (%s)\n", (char)v32);
    sub_100D5DE0(v2++, (int)Destination, 0.0, 255, 255, 255, 255);
  }
  (*(void (__thiscall **)(int *))(*this + 2160))(this);
  v33 = sub_1007DB30(27);
  if ( v33 != -1 )
  {
    v34 = v33 - 1000000000;
    if ( v34 != -1 && ((1 << (v34 & 0x1F)) & this[(v34 >> 5) + 548]) != 0 )
      sub_100D5DE0(v2++, (int)"Enemy too far to attack", 0.0, 255, 255, 255, 255);
  }
  if ( (this[63] & 0x1000) != 0 )
    sub_100DAFD0(this);
  if ( *((float *)this + 119) != flt_106F1CA8
    || *((float *)this + 120) != flt_106F1CAC
    || *((float *)this + 121) != flt_106F1CB0
    || *((float *)this + 122) != flt_106F1CB4
    || *((float *)this + 123) != flt_106F1CB8
    || *((float *)this + 124) != flt_106F1CBC )
  {
    if ( (this[63] & 0x1000) != 0 )
      sub_100DAFD0(this);
    if ( (this[63] & 0x1000) != 0 )
      sub_100DAFD0(this);
    if ( (this[63] & 0x1000) != 0 )
      sub_100DAFD0(this);
    v52 = *((float *)this + 119);
    sub_10429A00(Buffer, 0x200u, "Vel %.1f %.1f %.1f   Ang: %.1f %.1f %.1f\n", SLOBYTE(v52));
    sub_100D5DE0(v2++, (int)Buffer, 0.0, 255, 255, 255, 255);
  }
  if ( -1.0 != *((float *)this + 893) && *(_DWORD *)(dword_10690B5C + 48) )
  {
    v35 = *((float *)this + 893);
    v60[0] = 0;
    v36 = sub_1001E280(v60, "Cur Accuracy: %.1f", v35);
    sub_100D5DE0(v2++, (int)v36, 0.0, 255, 255, 255, 255);
    *(float *)ArgList = *((float *)this + 894);
    if ( *(float *)ArgList != 0.0 )
    {
      v37 = sub_1001E280(v60, "Act Accuracy: %.1f", (double)this[895] / (double)*(int *)ArgList * 100.0);
      sub_100D5DE0(v2++, (int)v37, 0.0, 255, 255, 255, 255);
    }
    if ( sub_100CF460(this) && (*(int (__thiscall **)(int *))(*this + 368))(this) )
    {
      v38 = *this;
      v55 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      v39 = sub_100CF460(this);
      (*(void (__thiscall **)(int *, float *, int, int))(v38 + 1108))(this, v62, v39, v55);
      v40 = *this;
      *(float *)ArgList = v62[0];
      v56 = (*(int (__thiscall **)(int *))(v40 + 368))(this);
      v41 = sub_100CF460(this);
      v53 = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(v40 + 1112))(this, v41, v56);
      v42 = asin(*(float *)ArgList);
      v43 = sub_1001E280(v60, "Cone %.1f, Bias %.2f", (double)(v42 * 57.29578 + v42 * 57.29578), v53);
      sub_100D5DE0(v2++, (int)v43, 0.0, 255, 255, 255, 255);
    }
  }
  v44 = this[652];
  if ( v44 != -1
    && off_1061BE18[4 * (this[652] & 0xFFF) + 2] == v44 >> 12
    && off_1061BE18[4 * (this[652] & 0xFFF) + 1]
    && sub_1007E000(this[647]) == 3 )
  {
    sub_104299C0(Destination, "Pathcorner/goal ent: ", 0x200u);
    v45 = this[652];
    if ( v45 == -1 || off_1061BE18[4 * (this[652] & 0xFFF) + 2] != (unsigned int)this[652] >> 12 )
      v46 = 0;
    else
      v46 = off_1061BE18[4 * (this[652] & 0xFFF) + 1];
    if ( *(_DWORD *)(v46 + 260) )
    {
      if ( v45 == -1 || off_1061BE18[4 * (this[652] & 0xFFF) + 2] != v45 >> 12 )
        v47 = (char *)MEMORY[0x104];
      else
        v47 = *(char **)(off_1061BE18[4 * (this[652] & 0xFFF) + 1] + 260);
    }
    else
    {
      if ( v45 == -1 || off_1061BE18[4 * (this[652] & 0xFFF) + 2] != v45 >> 12 )
        v48 = 0;
      else
        v48 = off_1061BE18[4 * (this[652] & 0xFFF) + 1];
      v47 = *(char **)(v48 + 92);
    }
    if ( !v47 )
      v47 = (char *)String;
    sub_10429750((int)Destination, v47, 512, -1);
    sub_100D5DE0(v2++, (int)Destination, 0.0, 255, 255, 255, 255);
  }
  v49 = this[106];
  if ( v49 )
  {
    sub_101C0960(v49, this, v62);
    v57 = v62[1];
    sub_10429A00(Destination, 0x200u, "Stress: %.2f", SLOBYTE(v57));
    sub_100D5DE0(v2++, (int)Destination, 0.0, 255, 255, 255, 255);
  }
  if ( !this[699] )
    return v2;
  if ( (unsigned __int8)sub_100B1BD0(this) )
  {
    sub_10429A00(Destination, 0x200u, "**Squad Leader**", v58);
    sub_100D5DE0(v2++, (int)Destination, 0.0, 255, 255, 255, 255);
  }
  v50 = (*(int (__thiscall **)(int *, int))(*this + 2164))(this, this[701]);
  sub_10429A00(Destination, 0x200u, "SquadSlot:%s", v50);
  sub_100D5DE0(v2, (int)Destination, 0.0, 255, 255, 255, 255);
  return v2 + 1;
}
