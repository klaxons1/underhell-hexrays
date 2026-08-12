char __thiscall sub_1041E340(char *this, int a2, char *Source, int a4)
{
  int v4; // esi
  unsigned __int8 v7; // al
  int v8; // ebx
  int *v9; // edi
  char *v10; // eax
  char *v11; // esi
  unsigned __int8 v12; // al
  int *v13; // esi
  int v14; // eax
  char *v15; // ebx
  int v16; // edi
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  bool v20; // zf
  char **v21; // eax
  char v22; // cl
  int v23; // [esp-10h] [ebp-1Ch]
  int v25; // [esp+10h] [ebp+4h]
  int v26; // [esp+10h] [ebp+4h]

  v4 = (int)this;
  sub_104299C0(this + 392, Source, 0x80u);
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    Source = 0;
    sub_1042E720(a2, "%d", &Source);
  }
  else
  {
    sub_100878C0((_DWORD *)a2, (int *)&Source);
  }
  if ( Source != (char *)1684239970 || sub_1008A100((_DWORD *)a2) != 4 )
    return 0;
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    Source = 0;
    sub_1042E720(a2, "%d", &Source);
  }
  else
  {
    sub_100878C0((_DWORD *)a2, (int *)&Source);
  }
  v7 = sub_1041A0B0((_DWORD *)a2);
  v8 = 0;
  v25 = v7;
  if ( v7 )
  {
    v9 = (int *)(v4 + 4);
    do
    {
      v10 = (char *)sub_10184390(380);
      v11 = v10 ? sub_1041C4B0(v10, v4) : 0;
      v23 = v9[3];
      Source = v11;
      sub_1041DA00(v9, v23, &Source);
      if ( !sub_1041B740((int)v11, a2, (int)this, a4) )
        return 0;
      v4 = (int)this;
    }
    while ( ++v8 < v25 );
  }
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    LOBYTE(Source) = 0;
    sub_1042E720(a2, "%u", &Source);
    v12 = (unsigned __int8)Source;
  }
  else if ( (unsigned __int8)sub_1042D170(1) )
  {
    v12 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + (*(_DWORD *)(a2 + 12))++);
  }
  else
  {
    v12 = 0;
  }
  v26 = v12;
  Source = 0;
  if ( v12 )
  {
    v13 = (int *)(v4 + 24);
    while ( 1 )
    {
      v14 = sub_10184390(280);
      if ( v14 )
        v15 = (char *)sub_1041EF50(v14);
      else
        v15 = 0;
      v16 = v13[3];
      v17 = v13[1];
      if ( v16 + 1 > v17 )
        sub_1044A1C0(v16 - v17 + 1);
      ++v13[3];
      v18 = *v13;
      v19 = v13[3] - v16 - 1;
      v20 = v13[3] - v16 == 1;
      v13[4] = *v13;
      if ( v19 >= 0 && !v20 )
        memcpy((void *)(v18 + 4 * v16 + 4), (const void *)(v18 + 4 * v16), 4 * v19);
      v21 = (char **)(*v13 + 4 * v16);
      if ( v21 )
        *v21 = v15;
      if ( !(unsigned __int8)sub_1041EFB0(v15, a2, (int)this, a4) )
        return 0;
      if ( (int)++Source >= v26 )
      {
        v4 = (int)this;
        break;
      }
    }
  }
  if ( !sub_1041A850((int *)(v4 + 300), a2, (_DWORD *)a2, a4) )
    return 0;
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    LOBYTE(a4) = 0;
    sub_1042E720(a2, "%u", &a4);
    v22 = a4;
  }
  else if ( (unsigned __int8)sub_1042D170(1) )
  {
    v22 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + (*(_DWORD *)(a2 + 12))++);
  }
  else
  {
    v22 = 0;
  }
  *(_BYTE *)(v4 + 524) ^= (*(_BYTE *)(v4 + 524) ^ (2 * (v22 != 0))) & 2;
  sub_1041D140((_DWORD *)v4);
  sub_1041CC30((_DWORD *)v4);
  if ( byte_106F1844 )
    *(float *)(v4 + 532) = sub_1041CD00(v4);
  return 1;
}
