int __thiscall sub_1012F730(_BYTE *this, int a2)
{
  int v3; // esi
  int v4; // ebx
  int result; // eax
  char *Str[4]; // [esp+Ch] [ebp-10h]

  sub_1025B1F0(a2);
  Str[0] = "enabledImage";
  Str[1] = "mouseOverImage";
  Str[2] = "pressedImage";
  Str[3] = "disabledImage";
  v3 = 0;
  v4 = (int)(this + 364);
  do
  {
    result = sub_1012FE80(a2, Str[v3], (int)this, v4);
    this[v3++ + 652] = result;
    v4 += 72;
  }
  while ( v3 < 4 );
  return result;
}
