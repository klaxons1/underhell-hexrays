int __thiscall sub_100A7780(_DWORD *this, int a2)
{
  switch ( a2 )
  {
    case 0:
      return (int)(0.30000001 / *((float *)off_103DC81C + 7));
    case 1:
      if ( *(_DWORD *)(this[1] + 3428) )
        return 1;
      if ( *((_DWORD *)off_103DC81C + 5) == 1 )
        return (int)(0.2 / *((float *)off_103DC81C + 7));
      else
        return (int)(1.0 / *((float *)off_103DC81C + 7));
    case 2:
      return (int)(0.2 / *((float *)off_103DC81C + 7));
    default:
      return 1;
  }
}
