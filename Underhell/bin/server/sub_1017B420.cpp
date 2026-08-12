int __thiscall sub_1017B420(int this)
{
  int v1; // edx

  v1 = *(_DWORD *)(this + 884);
  if ( !v1 && *(float *)(this + 876) < 0.0099999998 )
    *(float *)(this + 876) = 0.0099999998;
  if ( *(_DWORD *)(this + 872) || *(float *)(this + 876) <= 0.0 && !v1 )
  {
    *(_DWORD *)(this + 872) = 1;
    return sub_100EC4A0((int *)this, -1.0, 0);
  }
  else
  {
    *(_DWORD *)(this + 872) = 0;
    return sub_1017ABB0(this);
  }
}
