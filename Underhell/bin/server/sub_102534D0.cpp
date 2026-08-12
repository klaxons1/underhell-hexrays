int __thiscall sub_102534D0(int this)
{
  int v2; // edi
  int result; // eax

  sub_102515F0((float *)this);
  sub_100D7260((float *)this, &flt_106F1CB4);
  sub_100E11A0(this, (float *)(this + 944));
  if ( *(_DWORD *)(this + 992) == 2 )
  {
    v2 = *(_DWORD *)(this + 976);
    *(_DWORD *)(v2 + 800) = sub_101AD320(*(_DWORD *)(this + 968), (float *)(v2 + 716));
  }
  *(_DWORD *)(this + 4) = 0;
  sub_100D8290((float *)this, -1.0);
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 744))(this, *(_DWORD *)(this + 800));
  *(_DWORD *)(this + 1000) = 1;
  return result;
}
