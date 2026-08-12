void __thiscall sub_100FDE10(int this)
{
  const char *v2; // eax
  char *v3; // eax
  _BYTE v4[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = *(const char **)(this + 836);
  if ( !v2 )
    v2 = String;
  if ( !*(_DWORD *)(this + 836) || !strlen(v2) )
    *(_DWORD *)(this + 836) = *(_DWORD *)sub_10162BE0(v4, "DoorSound.Null");
  v3 = *(char **)(this + 836);
  if ( !v3 )
    v3 = (char *)String;
  sub_1023B8B0(v3);
  if ( *(float *)(this + 488) != flt_106F1CB4
    || *(float *)(this + 492) != flt_106F1CB8
    || *(float *)(this + 496) != flt_106F1CBC )
  {
    *(_DWORD *)(this + 4) = sub_100FCFD0;
    sub_100D8290((float *)this, 1.5);
  }
}
