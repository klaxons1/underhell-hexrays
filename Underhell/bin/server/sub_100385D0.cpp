int __thiscall sub_100385D0(char *this, int a2, int a3, char a4, int a5, int a6, char a7, int a8, int a9)
{
  int (__thiscall *v10)(char *, int); // eax
  int v11; // eax
  int (__thiscall *v12)(int, int); // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  const char *v18; // esi
  const char *v19; // eax
  char v20; // al
  char v21; // al
  int v22; // edi
  double v23; // st7
  int v24; // edx
  const char *v25; // eax
  int *v26; // ecx
  const char *v27; // edx
  int *v28; // ecx
  int v29; // esi
  _DWORD *v30; // eax
  int v31; // ecx
  int *v32; // ecx
  int v33; // edx
  int v34; // ecx
  _DWORD *v35; // edx
  int *v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int result; // eax
  const char *v44; // [esp+10h] [ebp-148h]
  char Buffer[256]; // [esp+20h] [ebp-138h] BYREF
  _DWORD v46[4]; // [esp+120h] [ebp-38h] BYREF
  int v47; // [esp+130h] [ebp-28h]
  int v48; // [esp+134h] [ebp-24h]
  const char *v49; // [esp+140h] [ebp-18h]
  int v50; // [esp+144h] [ebp-14h] BYREF
  const char *v51; // [esp+148h] [ebp-10h]
  const char *v52; // [esp+14Ch] [ebp-Ch]
  const char *v53; // [esp+150h] [ebp-8h]
  const char *v54; // [esp+154h] [ebp-4h]
  int v55; // [esp+160h] [ebp+8h]
  int v56; // [esp+160h] [ebp+8h]
  void (__thiscall **v57)(int, const char *, int); // [esp+164h] [ebp+Ch]
  void (__thiscall **v58)(int, const char *, int); // [esp+164h] [ebp+Ch]
  void (__thiscall **v59)(int, const char *, int); // [esp+164h] [ebp+Ch]
  void (__thiscall **v60)(int, const char *, int); // [esp+164h] [ebp+Ch]
  void (__thiscall **v61)(int, const char *, int); // [esp+164h] [ebp+Ch]
  void (__thiscall **v62)(int, const char *, int); // [esp+164h] [ebp+Ch]

  v46[3] = 0;
  if ( a2 )
    *((_DWORD *)this + 626) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *((_DWORD *)this + 626) = -1;
  v10 = *(int (__thiscall **)(char *, int))(*(_DWORD *)this + 1300);
  *((_DWORD *)this + 629) = 1;
  this[2512] = 1;
  v11 = v10(this, 1);
  sub_100445B0(v11);
  *((_DWORD *)this + 671) = 0;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 2504) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 8))(this);
    v12 = *(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 1300);
    *(_DWORD *)(a2 + 2516) = 2;
    *(_BYTE *)(a2 + 2512) = 1;
    v13 = v12(a2, 1);
    sub_100445B0(v13);
    *(_DWORD *)(a2 + 2684) = 0;
    sub_101DAAC0(this, a2);
  }
  v14 = a3;
  if ( *(_DWORD *)(a3 + 72) == -1 )
  {
    if ( *(_DWORD *)(a3 + 68) )
      v51 = *(const char **)(a3 + 68);
    else
      v51 = 0;
  }
  else
  {
    v15 = sub_100BDCE0(*(_DWORD *)(a3 + 72));
    v51 = (const char *)sub_100BE1F0(v15);
  }
  if ( *(_DWORD *)(a3 + 80) == -1 )
  {
    if ( *(_DWORD *)(a3 + 76) )
      v52 = *(const char **)(a3 + 76);
    else
      v52 = 0;
  }
  else
  {
    v16 = sub_100BDCE0(*(_DWORD *)(a3 + 80));
    v52 = (const char *)sub_100BE1F0(v16);
  }
  if ( *(_DWORD *)(a3 + 88) == -1 )
  {
    if ( *(_DWORD *)(a3 + 84) )
      v53 = *(const char **)(a3 + 84);
    else
      v53 = 0;
  }
  else
  {
    v17 = sub_100BDCE0(*(_DWORD *)(a3 + 88));
    v53 = (const char *)sub_100BE1F0(v17);
  }
  if ( *(_DWORD *)(dword_1069076C + 48) )
  {
    if ( !a2 )
      goto LABEL_36;
    v49 = *(const char **)(a2 + 92);
    if ( !v49 )
      v49 = String;
    v54 = *(const char **)a3;
    if ( !v54 )
      v54 = String;
    v18 = (const char *)*((_DWORD *)this + 23);
    if ( !v18 )
      v18 = String;
    v44 = (const char *)sub_100D6390(a2);
    v19 = (const char *)sub_100D6390(this);
    Msg("%s(%s) starting dynamic interaction \"%s\" with %s(%s).\n", v18, v19, v54, v49, v44);
    if ( v51 )
      Msg(" - Entry sequence: %s\n", v51);
    Msg(" - Core sequence: %s\n", v52);
    if ( v53 )
      Msg(" - Exit sequence: %s\n", v53);
    v14 = a3;
  }
  if ( a2 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24));
    v54 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                          dword_106B31D0,
                          *((_DWORD *)this + 6));
    sub_100D6390(a2);
    v20 = sub_100D6390(this);
    sub_10429A00(Buffer, 0x100u, "dss_%s%d%s%d", v20);
    v14 = a3;
    goto LABEL_37;
  }
LABEL_36:
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)this + 6));
  v21 = sub_100D6390(this);
  sub_10429A00(Buffer, 0x100u, "dss_%s%d", v21);
LABEL_37:
  sub_10162BE0(&v50, Buffer);
  *(float *)(v14 + 160) = RandomFloat(-2.0, 2.0) + *(float *)(dword_106B31C8 + 12) + *(float *)(v14 + 52);
  v22 = sub_101811E0("scripted_sequence", -1);
  (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v22 + 128))(v22, "m_iszEntry", v51);
  (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v22 + 128))(v22, "m_iszPlay", v52);
  (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v22 + 128))(v22, "m_iszPostIdle", v53);
  (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v22 + 128))(v22, "m_fMoveTo", "5");
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_100E0D20(this + 580);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60(this);
  v23 = *((float *)this + 636);
  v24 = *((_DWORD *)this + 178);
  v46[0] = *((_DWORD *)this + 176);
  *(float *)&v46[1] = v23;
  v46[2] = v24;
  sub_100E0EA0(v46);
  sub_10230AE0(this, 1);
  *(_DWORD *)(v22 + 260) = v50;
  v25 = (const char *)(*(_DWORD *)(v22 + 248) | 0x260);
  v54 = v25;
  if ( *(const char **)(v22 + 248) != v25 )
  {
    if ( *(_BYTE *)(v22 + 84) )
    {
      *(_BYTE *)(v22 + 88) |= 1u;
    }
    else
    {
      v26 = *(int **)(v22 + 24);
      if ( v26 )
      {
        sub_100194B0(v26, 248);
        v25 = v54;
      }
    }
    *(_DWORD *)(v22 + 248) = v25;
  }
  if ( (*(_BYTE *)(a3 + 4) & 0x40) != 0 )
  {
    v27 = (const char *)(*(_DWORD *)(v22 + 248) | 0x80);
    v54 = v27;
    if ( *(const char **)(v22 + 248) != v27 )
    {
      if ( *(_BYTE *)(v22 + 84) )
      {
        *(_BYTE *)(v22 + 88) |= 1u;
      }
      else
      {
        v28 = *(int **)(v22 + 24);
        if ( v28 )
        {
          sub_100194B0(v28, 248);
          v27 = v54;
        }
      }
      *(_DWORD *)(v22 + 248) = v27;
    }
  }
  *(_BYTE *)(v22 + 833) = (*(_DWORD *)(a3 + 4) & 8) != 0;
  *(_BYTE *)(v22 + 834) = 1;
  if ( *(_DWORD *)(dword_1069076C + 48) )
    *(_DWORD *)(v22 + 236) |= 9u;
  v29 = 0;
  if ( a2 )
  {
    v29 = sub_101811E0("scripted_sequence", -1);
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v29 + 128))(v29, "m_iszEntry", v51);
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v29 + 128))(v29, "m_iszPlay", v52);
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v29 + 128))(v29, "m_iszPostIdle", v53);
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v29 + 128))(v29, "m_fMoveTo", "5");
    sub_100E0D20(&a4);
    sub_100E0EA0(&a7);
    sub_10230AE0(a2, 1);
    *(_DWORD *)(v29 + 260) = v50;
    v30 = (_DWORD *)(v29 + 248);
    v31 = *(_DWORD *)(v29 + 248) | 0x260;
    v55 = v31;
    if ( *(_DWORD *)(v29 + 248) != v31 )
    {
      if ( *(_BYTE *)(v29 + 84) )
      {
        *(_BYTE *)(v29 + 88) |= 1u;
      }
      else
      {
        v32 = *(int **)(v29 + 24);
        if ( v32 )
          sub_100194B0(v32, 248);
        v31 = v55;
      }
      v30 = (_DWORD *)(v29 + 248);
      *(_DWORD *)(v29 + 248) = v31;
    }
    v33 = a3;
    if ( *(char *)(a3 + 4) < 0 )
    {
      v34 = *v30 | 0x80;
      v56 = v34;
      if ( *v30 != v34 )
      {
        v35 = v30 - 62;
        if ( *((_BYTE *)v30 - 164) )
        {
          *((_BYTE *)v35 + 88) |= 1u;
        }
        else
        {
          v36 = (int *)v35[6];
          if ( v36 )
            sub_100194B0(v36, 248);
          v34 = v56;
        }
        v33 = a3;
        *(_DWORD *)(v29 + 248) = v34;
      }
    }
    *(_BYTE *)(v29 + 833) = (*(_DWORD *)(v33 + 4) & 8) != 0;
    *(_BYTE *)(v29 + 834) = 1;
    if ( *(_DWORD *)(dword_1069076C + 48) )
      *(_DWORD *)(v29 + 236) |= 9u;
    sub_1022FE20(this, v33 + 92);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 96))(v22);
  if ( v29 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 96))(v29);
  (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 136))(v22);
  if ( v29 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 136))(v29);
  v57 = (void (__thiscall **)(int, const char *, int))(*(_DWORD *)v22 + 128);
  v37 = sub_1025F440("%s,Kill,,0,-1", (char)Buffer);
  (*v57)(v22, "OnCancelFailedSequence", v37);
  if ( v53 )
  {
    v58 = (void (__thiscall **)(int, const char *, int))(*(_DWORD *)v22 + 128);
    v38 = sub_1025F440("%s,Kill,,0,-1", (char)Buffer);
    (*v58)(v22, "OnPostIdleEndSequence", v38);
    if ( !v29 )
      goto LABEL_85;
    v59 = (void (__thiscall **)(int, const char *, int))(*(_DWORD *)v29 + 128);
    v39 = sub_1025F440("%s,Kill,,0,-1", (char)Buffer);
    (*v59)(v29, "OnPostIdleEndSequence", v39);
  }
  else
  {
    v60 = (void (__thiscall **)(int, const char *, int))(*(_DWORD *)v22 + 128);
    v40 = sub_1025F440("%s,Kill,,0,-1", (char)Buffer);
    (*v60)(v22, "OnEndSequence", v40);
    if ( !v29 )
      goto LABEL_85;
    v61 = (void (__thiscall **)(int, const char *, int))(*(_DWORD *)v29 + 128);
    v41 = sub_1025F440("%s,Kill,,0,-1", (char)Buffer);
    (*v61)(v29, "OnEndSequence", v41);
  }
  v62 = (void (__thiscall **)(int, const char *, int))(*(_DWORD *)v29 + 128);
  v42 = sub_1025F440("%s,Kill,,0,-1", (char)Buffer);
  (*v62)(v29, "OnCancelFailedSequence", v42);
LABEL_85:
  result = (*(int (__thiscall **)(int, const char *, char *, char *, _DWORD, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v22 + 148))(
             v22,
             "BeginSequence",
             this,
             this,
             0,
             v47,
             v48,
             -1,
             0,
             0);
  if ( v29 )
    return (*(int (__thiscall **)(int, const char *, char *, char *, _DWORD, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v29 + 148))(
             v29,
             "BeginSequence",
             this,
             this,
             0,
             v47,
             v48,
             -1,
             0,
             0);
  return result;
}
