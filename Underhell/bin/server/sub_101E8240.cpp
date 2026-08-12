int __thiscall sub_101E8240(_DWORD *this)
{
  int v2; // esi
  int (__thiscall *v3)(int, _DWORD *); // edx
  int v4; // eax
  char *v6; // edi
  int *v7; // ecx
  int v8; // esi
  int v9; // esi
  char *v10; // edi
  char v11; // [esp+8h] [ebp-94h] BYREF
  char v12; // [esp+3Ch] [ebp-60h] BYREF
  int v13; // [esp+8Ch] [ebp-10h]
  int v14; // [esp+90h] [ebp-Ch]
  int v15; // [esp+94h] [ebp-8h]
  _DWORD *v16; // [esp+98h] [ebp-4h]

  v2 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106B3CDC + 396))(dword_106B3CDC, this);
  v3 = *(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106B3CDC + 400);
  v13 = v2;
  v4 = v3(dword_106B3CDC, this);
  v15 = v4;
  if ( v2 == 9 && v4 == 12 )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 1232))(this, 1);
  v6 = &v12;
  v16 = this + 477;
  v14 = 48;
  do
  {
    if ( *v16 != -1 )
    {
      v7 = &off_1061BE18[4 * (*v16 & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*v16 & 0xFFF) + 2] == *v16 >> 12 )
      {
        v8 = *v7;
        if ( *v7 )
        {
          if ( v13 == 7 || v13 == 8 && sub_100CF460(this) && v8 == sub_100CF460(this) )
            v6 += 4;
        }
      }
    }
    ++v16;
    --v14;
  }
  while ( v14 );
  if ( v15 != 12 )
  {
    v9 = 0;
    v10 = &v11;
    do
    {
      if ( sub_100CF5D0(this, v9) > 0 && v15 == 10 )
        v10 += 4;
      ++v9;
    }
    while ( v9 < 32 );
  }
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 1232))(this, 1);
}
