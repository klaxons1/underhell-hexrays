int __thiscall sub_10369740(int this)
{
  int result; // eax

  sub_1039B800(this);
  if ( *(_DWORD *)(this + 5688) == -1 )
    *(_DWORD *)(this + 5688) = dword_106E7FF8;
  result = sub_100C74B0((volatile signed __int32 *)this, *(_DWORD *)(this + 5688), 0);
  *(_DWORD *)(this + 5684) = result;
  return result;
}
