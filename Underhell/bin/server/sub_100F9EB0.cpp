unsigned int __thiscall sub_100F9EB0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  int v8; // ecx
  int v9; // eax

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (v4 >> 5))) == 0 )
  {
    result = sub_100DA9C0(this, a2, a3);
    v6 = this + 208;
    v7 = 10;
    do
    {
      if ( *v6 != -1 )
      {
        result = (unsigned int)&off_1061BE18[4 * (*v6 & 0xFFF) + 1];
        v8 = *v6 >> 12;
        if ( off_1061BE18[4 * (*v6 & 0xFFF) + 2] == v8 )
        {
          if ( *(_DWORD *)result )
          {
            if ( off_1061BE18[4 * (*v6 & 0xFFF) + 2] == v8 )
              v9 = *(_DWORD *)result;
            else
              v9 = 0;
            result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 88))(v9, a2, a3);
          }
        }
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
