int __thiscall sub_1016EF70(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  double v4; // st7
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  bool v8; // cc
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v13; // [esp+Ch] [ebp-24h]
  int v14; // [esp+10h] [ebp-20h]
  int v15; // [esp+14h] [ebp-1Ch]
  int v16; // [esp+18h] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-14h]
  int v18; // [esp+20h] [ebp-10h]
  int v19; // [esp+24h] [ebp-Ch]
  int v20; // [esp+28h] [ebp-8h]
  int i; // [esp+2Ch] [ebp-4h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v2 = sub_1016ECF0(this, this[6]);
  v3 = 0;
  for ( i = 0; ; v3 = i )
  {
    v4 = (double)i;
    v5 = dword_106B31C8;
    *(&v17 + v3) = 0;
    *(&v13 + v3) = 0;
    v6 = this[6] + (int)((v4 + 1.0 + v4 + 1.0) / *(float *)(v5 + 28) + 0.5);
    if ( v6 > this[13] )
      break;
    for ( ; v2 != 0xFFFF; v2 = (unsigned __int16)sub_1016DF30(this + 100, v2) )
    {
      v7 = this[101];
      v8 = *(_DWORD *)(v7 + 20 * (unsigned __int16)v2 + 8) <= v6;
      v9 = v7 + 20 * (unsigned __int16)v2 + 8;
      if ( !v8 )
        break;
      v10 = *(_DWORD *)(v9 + 4);
      v11 = i;
      if ( v10 > *(&v17 + i) )
      {
        *(&v13 + i) = v2;
        *(&v17 + v11) = v10;
      }
    }
    if ( ++i >= 4 )
      break;
  }
  if ( !v17 && !v18 )
  {
    if ( !v19 )
      return 0;
LABEL_15:
    if ( v18 >= v19 && v18 >= v20 )
      return this[101] + 20 * (unsigned __int16)v14 + 8;
    if ( v17 <= v18 )
      goto LABEL_21;
    goto LABEL_19;
  }
  if ( v18 >= v17 )
    goto LABEL_15;
LABEL_19:
  if ( v17 > v19 )
    return this[101] + 20 * (unsigned __int16)v13 + 8;
LABEL_21:
  if ( v19 > v20 )
    return this[101] + 20 * (unsigned __int16)v15 + 8;
  if ( !v13 )
    return 0;
  return this[101] + 20 * (unsigned __int16)v13 + 8;
}
