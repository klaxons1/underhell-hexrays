int __thiscall sub_1025C3E0(char *this)
{
  void (__stdcall *v2)(int, _DWORD); // edx
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int result; // eax

  *((_WORD *)this + 146) |= 0x18u;
  *((_WORD *)this + 177) = -1;
  *((_WORD *)this + 178) = -1;
  *((_WORD *)this + 179) = -1;
  v2 = *(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this + 792);
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  this[360] = 0;
  v2(6, 0);
  (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)this + 960))(this, 107, 1);
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 968))(this, 0);
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 264))(this, 1);
  v3 = this + 104;
  this[352] = 1;
  v4 = 16 * sub_1023CE50((int *)this + 26, *((_DWORD *)this + 29));
  *(_DWORD *)(v4 + *v3) = "defaultFgColor_override";
  *(_DWORD *)(*v3 + v4 + 4) = this + 320;
  *(_BYTE *)(*v3 + v4 + 12) = 0;
  v5 = 16 * sub_1023CE50((int *)this + 26, *((_DWORD *)this + 29));
  *(_DWORD *)(v5 + *v3) = "defaultBgColor_override";
  *(_DWORD *)(*v3 + v5 + 4) = this + 324;
  *(_BYTE *)(*v3 + v5 + 12) = 0;
  v6 = 16 * sub_1023CE50((int *)this + 26, *((_DWORD *)this + 29));
  *(_DWORD *)(v6 + *v3) = "armedFgColor_override";
  *(_DWORD *)(*v3 + v6 + 4) = this + 328;
  *(_BYTE *)(*v3 + v6 + 12) = 0;
  v7 = 16 * sub_1023CE50((int *)this + 26, *((_DWORD *)this + 29));
  *(_DWORD *)(v7 + *v3) = "armedBgColor_override";
  *(_DWORD *)(*v3 + v7 + 4) = this + 332;
  *(_BYTE *)(*v3 + v7 + 12) = 0;
  v8 = 16 * sub_1023CE50((int *)this + 26, *((_DWORD *)this + 29));
  *(_DWORD *)(v8 + *v3) = "depressedFgColor_override";
  *(_DWORD *)(*v3 + v8 + 4) = this + 336;
  *(_BYTE *)(*v3 + v8 + 12) = 0;
  v9 = 16 * sub_1023CE50((int *)this + 26, *((_DWORD *)this + 29));
  *(_DWORD *)(v9 + *v3) = "depressedBgColor_override";
  *(_DWORD *)(*v3 + v9 + 4) = this + 340;
  *(_BYTE *)(*v3 + v9 + 12) = 0;
  v10 = 16 * sub_1023CE50((int *)this + 26, *((_DWORD *)this + 29));
  *(_DWORD *)(v10 + *v3) = "keyboardFocusColor_override";
  *(_DWORD *)(*v3 + v10 + 4) = this + 344;
  *(_BYTE *)(*v3 + v10 + 12) = 0;
  result = 16 * sub_1023CE50((int *)this + 26, *((_DWORD *)this + 29));
  *(_DWORD *)(result + *v3) = "blinkFgColor_override";
  *(_DWORD *)(*v3 + result + 4) = this + 348;
  *(_BYTE *)(*v3 + result + 12) = 0;
  return result;
}
