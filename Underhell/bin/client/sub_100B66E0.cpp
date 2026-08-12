char __thiscall sub_100B66E0(int this, int a2, int a3)
{
  int v4; // esi
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // edx
  _DWORD v9[2]; // [esp+Ch] [ebp-8h] BYREF

  v9[0] = a2;
  if ( sub_100B4A40((_WORD *)(this + 108), (int)v9) == -1 )
    return 0;
  v9[0] = a2;
  v4 = *(_DWORD *)(16 * (unsigned __int16)sub_100B4A40((_WORD *)(this + 108), (int)v9) + *(_DWORD *)(this + 112) + 12);
  if ( !v4 )
    return 0;
  if ( a3 )
  {
    v6 = *(_DWORD *)(v4 + 16);
    v7 = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      sub_10122F90(&a3);
    }
    else
    {
      v8 = *(_DWORD **)(v4 + 4);
      while ( a3 != *v8 )
      {
        ++v7;
        ++v8;
        if ( v7 >= v6 )
          goto LABEL_9;
      }
    }
    return 1;
  }
  else
  {
    *(_BYTE *)v4 = 1;
    return 1;
  }
}
