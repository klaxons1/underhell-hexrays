void __thiscall sub_100FD110(int this)
{
  if ( sub_100FD080(this, *(float *)(this + 824)) )
  {
    *(_DWORD *)(this + 4) = sub_100FC070;
    sub_100FC070(this);
  }
  else if ( *(_BYTE *)(this + 856) )
  {
    sub_100D8290((float *)this, *(float *)(dword_106B31C8 + 28));
  }
  else
  {
    sub_100D8290((float *)this, 0.1);
  }
}
