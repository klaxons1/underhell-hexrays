char __thiscall sub_102F5F40(int this, char *String1, int a3, char a4, int a5, int a6)
{
  void (__noreturn ***v7)(); // eax
  void (__noreturn ***v8)(); // eax

  if ( !sub_10097000((_DWORD *)this, String1, a3, a4, a5, a6) )
    return 0;
  if ( *(_DWORD *)(this + 5744) )
  {
    v7 = sub_1023DBA0();
    if ( ((double (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v7)[15])(v7, *(_DWORD *)(this + 5744)) > 0.0 )
    {
      v8 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v8)[12])(
        v8,
        *(_DWORD *)(this + 5744),
        0.0,
        0.1);
      *(float *)(this + 5792) = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this) + 44)
                              - *(float *)(dword_106B31C8 + 12);
      *(float *)(this + 5796) = 0.0;
      sub_1001EE20((float *)(this + 5784));
    }
  }
  return 1;
}
