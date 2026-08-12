void __thiscall sub_101DD7E0(_DWORD *this, int a2)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx

  v2 = this[301];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)*v3 + 1476))(*v3, 0);
        else
          (*(void (__thiscall **)(_DWORD, _DWORD))(MEMORY[0] + 1476))(0, 0);
      }
    }
  }
}
