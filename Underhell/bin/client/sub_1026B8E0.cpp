void __thiscall sub_1026B8E0(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // ebx

  if ( a2 >= 0 && a2 < this[59] && a2 <= this[65] )
  {
    v3 = 12 * a2 + this[58];
    if ( *(_DWORD *)(v3 + 4) != a2 || *(_DWORD *)(v3 + 8) == a2 )
    {
      v4 = *(_DWORD *)(12 * a2 + this[58]);
      if ( v4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 204))(v4) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 972))(v4);
          this[95] = a2;
        }
      }
    }
  }
}
