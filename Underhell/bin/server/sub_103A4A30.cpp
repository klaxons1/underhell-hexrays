void __thiscall sub_103A4A30(_BYTE *this, _DWORD *a2)
{
  void (__stdcall *v2)(int); // edx

  if ( *a2 == dword_106EAA68 )
  {
    v2 = *(void (__stdcall **)(int))(*(_DWORD *)this + 1416);
    this[3969] = 0;
    v2(1);
  }
  else
  {
    sub_1003AD70((int)this, (int)a2);
  }
}
