void __thiscall sub_1018F580(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // ecx
  int v6; // ecx
  int v7; // [esp+4h] [ebp-4h]

  v2 = this[3];
  if ( v2 != -1 )
  {
    do
    {
      v3 = 3 * v2;
      v4 = *(_DWORD **)(*this + 4 * v3);
      v5 = *(_DWORD *)(*this + 4 * v3 + 8);
      v7 = v5;
      if ( v4 )
      {
        sub_1018ECD0(v4 + 10);
        if ( (int)v4[12] >= 0 )
        {
          if ( v4[10] )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v4[10]);
            v4[10] = 0;
          }
          v4[11] = 0;
        }
        sub_10184660((int)v4);
        v5 = v7;
      }
      v2 = v5;
    }
    while ( v5 != -1 );
  }
  sub_1018EC70(this);
  if ( (int)this[2] >= 0 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  v6 = *this;
  this[5] = -1;
  this[7] = -1;
  this[8] = v6;
}
