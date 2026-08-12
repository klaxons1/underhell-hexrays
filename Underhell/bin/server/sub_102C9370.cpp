void __thiscall sub_102C9370(int this)
{
  void (__noreturn ***v2)(); // edi
  float v3; // [esp+14h] [ebp-Ch]

  if ( *(_BYTE *)(this + 1404) )
  {
    v2 = sub_1023DBA0();
    v3 = ((double (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[15])(v2, *(_DWORD *)(this + 1396)) * 0.1;
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v2)[12])(
      v2,
      *(_DWORD *)(this + 1396),
      0.0,
      LODWORD(v3));
    sub_1023C380((_DWORD *)this, (int)"Airboat.FireGunRevDown", 0.0, 0);
    *(_BYTE *)(this + 1404) = 0;
  }
}
