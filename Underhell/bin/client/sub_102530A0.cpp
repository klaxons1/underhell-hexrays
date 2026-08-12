int __thiscall sub_102530A0(int this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int result; // eax

  sub_10241C00((int *)this, a2);
  v3 = *(_DWORD *)this;
  v4 = sub_1022A800(a2, "textHidden", 0);
  LOBYTE(v4) = v4 != 0;
  (*(void (__thiscall **)(int, int))(v3 + 916))(this, v4);
  v5 = *(_DWORD *)this;
  v6 = sub_1022A800(a2, "editable", 1);
  LOBYTE(v6) = v6 != 0;
  (*(void (__thiscall **)(int, int))(v5 + 920))(this, v6);
  v7 = *(_DWORD *)this;
  v8 = sub_1022A800(a2, "maxchars", -1);
  (*(void (__thiscall **)(int, int))(v7 + 956))(this, v8);
  *(_BYTE *)(this + 402) = sub_1022A800(a2, "NumericInputOnly", 0) != 0;
  result = sub_1022A800(a2, "unicode", 0);
  *(_BYTE *)(this + 403) = result != 0;
  return result;
}
