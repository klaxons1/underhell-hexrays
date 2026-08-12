int __thiscall sub_10372A60(int this)
{
  int result; // eax
  int v3; // edi
  const char *v4; // eax
  char *v5; // eax
  int v6; // edi
  char *v7; // eax
  int v8; // edi
  char *v9; // eax
  char Buffer[256]; // [esp+1Ch] [ebp-100h] BYREF

  result = sub_1003B900((int *)this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = "Planted";
    if ( !*(_BYTE *)(this + 4288) )
      v4 = "Unplanted";
    v5 = sub_1001E280(Buffer, "%s", v4);
    sub_100D5DE0((_DWORD *)this, v3, (int)v5, 0.0, 255, 255, 255, 255);
    v6 = v3 + 1;
    v7 = sub_1001E280(Buffer, "Eye state: %d", *(_DWORD *)(this + 4188));
    sub_100D5DE0((_DWORD *)this, v6, (int)v7, 0.0, 255, 255, 255, 255);
    v8 = v6 + 1;
    if ( *(_DWORD *)(this + 4624) )
    {
      v9 = sub_1001E280(Buffer, "Next Siege Attempt:%f", *(float *)(this + 4628) - *(float *)(dword_106B31C8 + 12));
      sub_100D5DE0((_DWORD *)this, v8, (int)v9, 0.0, 255, 255, 255, 255);
      return v8 + 1;
    }
    else
    {
      return v8;
    }
  }
  return result;
}
