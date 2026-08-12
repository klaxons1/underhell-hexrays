int __thiscall sub_1025E120(int this, _DWORD *a2)
{
  char *v3; // ebp
  int v4; // eax
  unsigned int v5; // kr00_4
  char *v6; // eax
  int v7; // edi
  int v8; // eax
  int result; // eax
  int v10; // [esp-8h] [ebp-14h]

  sub_10241C00((int *)this, a2);
  v3 = (char *)sub_1022B4C0(a2, "image", 0);
  if ( v3 )
  {
    v4 = sub_1022A800(a2, "scaleImage", 0);
    v10 = *(_DWORD *)(this + 240);
    *(_BYTE *)(this + 246) = v4 == 1;
    sub_10034930(v10);
    v5 = strlen(v3);
    v6 = (char *)sub_100DDA40(v5 + 1);
    *(_DWORD *)(this + 240) = v6;
    sub_102282F0(v6, v3, v5 + 1);
    v7 = *(_DWORD *)this;
    v8 = sub_1022A800(a2, "frames", 0);
    (*(void (__thiscall **)(int, _DWORD, int))(v7 + 772))(this, *(_DWORD *)(this + 240), v8);
  }
  result = sub_1022A800(a2, "anim_framerate", 100);
  *(_DWORD *)(this + 216) = result;
  return result;
}
