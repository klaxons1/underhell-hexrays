void __thiscall sub_10176390(float *this, int a2)
{
  int v2; // eax
  int v4; // ecx
  int v5; // eax

  v2 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v2 + 8);
  if ( v4 != v2 + 4 )
  {
    for ( *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4); ; *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 4) )
    {
      if ( *((float *)off_103DC81C + 3) < (double)this[65] && *((float *)off_103DC81C + 3) >= (double)this[66] )
        sub_101760A0((int)this, (float *)a2);
      v5 = *(_DWORD *)(a2 + 16);
      if ( v5 == *(_DWORD *)(a2 + 4) + 4 )
        break;
    }
  }
  sub_100F2DE0(this, a2);
}
