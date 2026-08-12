int __thiscall sub_102099D0(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  double v6; // st7
  int v7; // edi
  int v8; // edi
  int v9; // edi
  double v10; // [esp+0h] [ebp-230h]
  double ArgList; // [esp+4h] [ebp-22Ch]
  float v12; // [esp+14h] [ebp-21Ch]
  char v13; // [esp+1Ch] [ebp-214h]
  char Buffer[512]; // [esp+24h] [ebp-20Ch] BYREF
  float v15; // [esp+224h] [ebp-Ch] BYREF

  result = sub_100C0140(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 && *(_DWORD *)(this + 424) )
  {
    v4 = *(_DWORD *)(this + 424);
    v12 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 116))(v4);
    v5 = sub_10215420(v12);
    v6 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v4 + 116))(v4, v5);
    ArgList = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v4 + 116))(
                v4,
                COERCE_UNSIGNED_INT64(v6 * 2.2),
                HIDWORD(COERCE_UNSIGNED_INT64(v6 * 2.2)));
    sub_10429A00(Buffer, 0x200u, "Mass: %.2f kg / %.2f lb (%s)", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v7 = v3 + 1;
    v10 = sub_101C0960((int *)*(_DWORD *)(this + 424), this, (int)&v15);
    sub_10429A00(Buffer, 0x200u, "Stress: %.2f (%.2f / %.2f)", SLOBYTE(v10));
    sub_100D5DE0((_DWORD *)this, v7, (int)Buffer, 0.0, 255, 255, 255, 255);
    v8 = v7 + 1;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 424) + 40))(*(_DWORD *)(this + 424)) )
    {
      sub_10429A00(Buffer, 0x200u, "Motion Disabled", v13);
      sub_100D5DE0((_DWORD *)this, v8++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    if ( *(_DWORD *)(this + 1268) )
    {
      sub_10429A00(Buffer, 0x200u, "Base PropData: %s", *(_DWORD *)(this + 1268));
      sub_100D5DE0((_DWORD *)this, v8++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    if ( *(_DWORD *)(this + 1284) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(this + 1120) + 76))(this + 1120);
      sub_10429A00(Buffer, 0x200u, "Breakable Chunks: %d (Max Size %d)", *(_DWORD *)(this + 1284));
      sub_100D5DE0((_DWORD *)this, v8++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    sub_10429A00(Buffer, 0x200u, "Skin: %d", *(_DWORD *)(this + 848));
    sub_100D5DE0((_DWORD *)this, v8, (int)Buffer, 0.0, 255, 255, 255, 255);
    v9 = v8 + 1;
    sub_10429A00(Buffer, 0x200u, "Health: %d, collision group %d", *(_DWORD *)(this + 220));
    sub_100D5DE0((_DWORD *)this, v9, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v9 + 1;
  }
  return result;
}
