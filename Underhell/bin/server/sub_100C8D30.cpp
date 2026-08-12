void __thiscall sub_100C8D30(_DWORD *this)
{
  unsigned int v1; // edx
  int *v2; // eax
  unsigned int v3; // edx

  v1 = this[525];
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (this[525] & 0xFFF) + 1];
    v3 = v1 >> 12;
    if ( off_1061BE18[4 * (this[525] & 0xFFF) + 2] == v3 )
    {
      if ( *v2 )
      {
        if ( off_1061BE18[4 * (this[525] & 0xFFF) + 2] == v3 )
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)*v2 + 1388))(*v2, this);
        else
          (*(void (__thiscall **)(_DWORD, _DWORD *))(MEMORY[0] + 1388))(0, this);
      }
    }
  }
}
