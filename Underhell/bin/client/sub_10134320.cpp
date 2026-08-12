int __thiscall sub_10134320(int this, int a2)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  sub_10243490(0, "CNetGraphPanel");
  *(_DWORD *)this = &CNetGraphPanel::`vftable';
  *(_DWORD *)(this + 57732) = 0;
  *(_DWORD *)(this + 57736) = 0;
  *(_DWORD *)(this + 57740) = 0;
  *(_DWORD *)(this + 57744) = 0;
  *(_DWORD *)(this + 57748) = 0;
  sub_10233590(0, 0, 1);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v5, &v6);
  sub_10236550(a2);
  sub_102361A0(v5, v6);
  sub_10236140(0, 0);
  sub_10236310(0);
  sub_10237030(0);
  *(_DWORD *)(this + 57716) = 0;
  *(_DWORD *)(this + 57712) = 0;
  *(_DWORD *)(this + 57720) = 0;
  *(_DWORD *)(this + 57756) = 1;
  *(_DWORD *)(this + 57760) = 100;
  sub_10237590(-16777216);
  sub_10239D10(0);
  sub_10132E20((char *)this);
  *(_DWORD *)(this + 57724) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "cl_updaterate");
  *(_DWORD *)(this + 57728) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "cl_cmdrate");
  *(_BYTE *)(this + 278) = 0;
  *(_WORD *)(this + 279) = 0;
  *(_BYTE *)(this + 281) = 0;
  *(_WORD *)(this + 276) = -1;
  *(_WORD *)(this + 282) = -1;
  *(_BYTE *)(this + 284) = -1;
  memset((void *)(this + 288), 0, 0x2000u);
  memset((void *)(this + 8480), 0, 0x3000u);
  memset((void *)(this + 20768), 0, 0x9000u);
  v3 = *(_DWORD *)(this + 68);
  *(float *)(this + 57632) = 0.0;
  *(float *)(this + 57636) = 0.0;
  *(_DWORD *)(this + 57648) = 0;
  *(float *)(this + 57640) = 0.0;
  *(_DWORD *)(this + 57652) = 0;
  *(float *)(this + 57644) = 0.0;
  *(_DWORD *)(this + 57656) = 0;
  *(float *)(this + 57660) = 0.0;
  *(_DWORD *)(this + 57692) = -16776961;
  *(float *)(this + 57664) = 0.0;
  *(_DWORD *)(this + 57696) = -65536;
  *(float *)(this + 57668) = 0.0;
  *(_DWORD *)(this + 57700) = -12615696;
  *(float *)(this + 57672) = 0.0;
  *(_DWORD *)(this + 57704) = -16719391;
  *(float *)(this + 57764) = 0.0;
  *(_DWORD *)(this + 57708) = -398459073;
  *(float *)(this + 57768) = 0.0;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA74 + 72))(dword_1047CA74, v3, 500);
  sub_102334D0("vgui/white", "Other textures", 1);
  dword_10439688 = this;
  return this;
}
