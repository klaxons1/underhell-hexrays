int __thiscall sub_100154F0(int this, int a2)
{
  int v3; // eax

  sub_10029860(a2);
  v3 = ((unsigned __int8)*(_DWORD *)(this + 1996) + 1) & 7;
  if ( *(_DWORD *)(this + 1996) != v3 )
    *(_DWORD *)(this + 1996) = v3;
  *(_DWORD *)(this + 2008) = *(_DWORD *)(this + 1996);
  *(float *)(this + 96) = *((float *)off_103DC81C + 3);
  sub_10025680(0.0);
  return sub_10029AE0(this);
}
