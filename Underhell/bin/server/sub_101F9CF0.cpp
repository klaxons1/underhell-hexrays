unsigned int __thiscall sub_101F9CF0(int this)
{
  unsigned int v2; // esi
  int v3; // eax

  v2 = sub_101F98E0((int **)this, 0);
  if ( v2 && !sub_101F9620(v2, (int *)(this + 28)) && *(_DWORD *)(v2 + 304) != v2 )
    sub_101F9870((int *)this, v2);
  *(_DWORD *)(v2 + 304) = 0;
  *(_DWORD *)(v2 + 308) = *(_DWORD *)(this + 12);
  *(_DWORD *)(this + 12) = v2;
  v3 = *(_DWORD *)(v2 + 308);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 304) = v2;
    ++*(_DWORD *)(this + 24);
  }
  else
  {
    ++*(_DWORD *)(this + 24);
    *(_DWORD *)(this + 16) = v2;
  }
  sub_101F95B0((char *)v2);
  return v2;
}
