int __thiscall sub_101F4AC0(int *this)
{
  int *v2; // esi

  v2 = this + 675;
  *this = (int)&CMDLPanel::`vftable';
  sub_101F4830(this + 675);
  if ( v2[2] >= 0 )
  {
    if ( *v2 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v2);
      *v2 = 0;
    }
    v2[1] = 0;
  }
  v2[4] = *v2;
  sub_10233280(0);
  sub_10233280(0);
  sub_10233380(this + 681);
  sub_10233380(this + 680);
  sub_101F4870(v2);
  sub_102358F0(this + 267);
  return sub_101F5D80(this);
}
