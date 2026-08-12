int __thiscall sub_103F0EB0(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebx
  int *v5; // edi
  _BYTE v6[48]; // [esp+24h] [ebp-80h] BYREF
  _BYTE v7[48]; // [esp+54h] [ebp-50h] BYREF
  _BYTE v8[12]; // [esp+84h] [ebp-20h] BYREF
  float v9[3]; // [esp+90h] [ebp-14h] BYREF
  float v10; // [esp+9Ch] [ebp-8h] BYREF
  float v11; // [esp+A0h] [ebp-4h]

  result = sub_100BEF30((int)this, "controlpanel0_ll");
  v3 = result;
  if ( result > 0 )
  {
    result = sub_100BEF30((int)this, "controlpanel0_ur");
    v4 = result;
    if ( result > 0 )
    {
      (*(void (__thiscall **)(_DWORD *, int, _BYTE *))(*this + 796))(this, v3, v7);
      sub_10424F80(v7, v6);
      (*(void (__thiscall **)(_DWORD *, int, _BYTE *))(*this + 796))(this, v4, v7);
      sub_10421CE0(v7, 3, v8);
      sub_10421B40(v8, v6, v9);
      v10 = v9[0];
      v11 = v9[1];
      v5 = (int *)sub_10271E50((int)"vgui_screen", (int)"jalopy_radar_panel", (int)this, (int)this, v3);
      sub_10271D60((int)v5, v10, v11);
      sub_10271A40(v5, 1);
      sub_10271C40((int)v5, "engine/writez");
      sub_10271A90((int)v5, 1);
      if ( v5 )
        this[527] = *(_DWORD *)(*(int (__thiscall **)(int *))(*v5 + 8))(v5);
      else
        this[527] = -1;
      *((_BYTE *)this + 2100) = 1;
      v10 = 0.0;
      sub_103F0900(this + 531, &v10);
      result = dword_106B31C8;
      *((float *)this + 526) = *(float *)(dword_106B31C8 + 12) - 1.0;
    }
  }
  return result;
}
