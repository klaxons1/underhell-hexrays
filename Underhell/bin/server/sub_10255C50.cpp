void __thiscall sub_10255C50(int this, int a2)
{
  __int64 v2; // [esp-8h] [ebp-Ch]
  float v3; // [esp+0h] [ebp-4h]

  if ( !*(_BYTE *)(this + 916) )
  {
    v3 = 0.0;
    HIDWORD(v2) = this;
    LODWORD(v2) = this;
    if ( *(_DWORD *)(this + 1084) )
      sub_1010DD80((_DWORD *)(this + 1024), v2, v3);
    else
      sub_1010DD80((_DWORD *)(this + 1048), v2, v3);
  }
}
