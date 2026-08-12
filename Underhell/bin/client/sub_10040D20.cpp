int __thiscall sub_10040D20(_WORD *this, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // cx
  int v9; // esi
  _WORD *v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  void *v15; // eax
  int v17; // [esp-4h] [ebp-20h]
  int v18; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v19; // [esp+10h] [ebp-Ch]
  void *Src; // [esp+14h] [ebp-8h]
  unsigned __int16 v21; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  v3 = (int)(this + 1296);
  v4 = 0;
  v18 = a2;
  v19 = 0;
  Src = 0;
  if ( sub_1003FC40(this + 1296, (int)&v18) == -1 )
  {
    v19 = *(_DWORD *)(v2 + 96);
    Src = (void *)sub_100DDA40((unsigned __int64)v19 >> 30 != 0 ? -1 : 4 * v19);
    memset(Src, 0, 4 * v19);
    if ( *(int *)(v2 + 96) > 0 )
    {
      do
      {
        v5 = sub_1003E4D0((char *)(v2 + *(_DWORD *)(4 * v4 + *(_DWORD *)(v2 + 100) + v2)));
        *((_DWORD *)Src + v4++) = v5;
      }
      while ( v4 < *(_DWORD *)(v2 + 96) );
    }
    sub_1003F6C0((_WORD *)v3, (int)&v18, &v21, (_BYTE *)&a2 + 3);
    v6 = sub_1003F7B0(v3);
    v7 = v21;
    v8 = v6;
    v9 = 20 * v6;
    v10 = (_WORD *)(v9 + *(_DWORD *)(v3 + 4));
    v10[1] = -1;
    *v10 = -1;
    v10[2] = v7;
    v10[3] = 0;
    if ( v7 == 0xFFFF )
    {
      *(_WORD *)(v3 + 16) = v8;
    }
    else
    {
      v11 = 5 * v7;
      v12 = *(_DWORD *)(v3 + 4);
      if ( HIBYTE(a2) )
        *(_WORD *)(v12 + 4 * v11) = v8;
      else
        *(_WORD *)(v12 + 4 * v11 + 2) = v8;
    }
    sub_1003FEB0(v3, v8);
    v13 = *(_DWORD *)(v3 + 4);
    ++*(_WORD *)(v3 + 18);
    v14 = (_DWORD *)(v9 + v13 + 8);
    if ( v14 )
    {
      v17 = v14[2];
      *v14 = v18;
      sub_10034930(v17);
      v15 = (void *)sub_100DDA40((unsigned __int64)v19 >> 30 != 0 ? -1 : 4 * v19);
      v14[2] = v15;
      memcpy_0(v15, Src, 4 * v19);
      v14[1] = v19;
    }
  }
  return sub_10034930((int)Src);
}
