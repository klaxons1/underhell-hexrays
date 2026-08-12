void __thiscall sub_10046B40(int this)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 912))(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 948))(this);
  sub_10012A20((_BYTE *)this);
  sub_10046930(this);
  if ( *(char *)(this + 135) < 1 && (*(_BYTE *)(this + 732) & 1) == 0 )
  {
    sub_10038150(this);
    *(float *)(this + 3548) = -*(float *)(this + 252);
  }
}
