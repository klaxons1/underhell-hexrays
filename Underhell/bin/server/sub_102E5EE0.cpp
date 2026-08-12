void __thiscall sub_102E5EE0(int this, unsigned int a2)
{
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // ebx
  int *v6; // ecx
  int v7; // esi
  int v8; // esi
  int v9; // [esp+10h] [ebp+8h]

  sub_102587A0((_DWORD *)this, a2);
  if ( (*(unsigned __int8 (__thiscall **)(int, unsigned int))(*(_DWORD *)this + 752))(this, a2) )
  {
    v3 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 288))(a2);
    v4 = v3;
    if ( *(_BYTE *)(this + 1116) )
    {
      v5 = (_DWORD *)(v3 + 1908);
      v9 = 48;
      do
      {
        if ( *v5 != -1 )
        {
          v6 = &off_1061BE18[4 * (*v5 & 0xFFF) + 1];
          if ( off_1061BE18[4 * (*v5 & 0xFFF) + 2] == *v5 >> 12 )
          {
            v7 = *v6;
            if ( *v6 )
            {
              (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 960))(v4, v7, 0, 0);
              sub_1025FAC0(v7);
            }
          }
        }
        ++v5;
        --v9;
      }
      while ( v9 );
    }
    else if ( v3 && !*(_BYTE *)(v3 + 1670) )
    {
      v8 = sub_100CF660((_DWORD *)v3, (int)"weapon_bugbait", 0);
      if ( v8 )
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 960))(v4, v8, 0, 0);
        sub_1025FAC0(v8);
      }
      sub_100CD920((float *)v4, 1);
      *(_BYTE *)(v4 + 1670) = 1;
    }
  }
}
