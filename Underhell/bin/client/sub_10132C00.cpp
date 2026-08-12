int *__thiscall sub_10132C00(int *this, int a2)
{
  int v3; // eax
  int v5; // [esp-4h] [ebp-Ch]

  sub_10243490(0, "CMessageCharsPanel");
  *this = (int)&CMessageCharsPanel::`vftable';
  sub_10236550(a2);
  v5 = sub_10076720();
  v3 = sub_10076740();
  sub_102361A0(v3, v5);
  sub_10236140(0, 0);
  sub_10236310(1);
  sub_10237030(0);
  sub_10237D40(0);
  sub_10237E50(0);
  this[51] = 0;
  sub_10237590(-16777216);
  sub_10239D10(0);
  memset(this + 52, 0, 0x8000u);
  sub_101326D0(this);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA74 + 72))(dword_1047CA74, this[17], 100);
  return this;
}
