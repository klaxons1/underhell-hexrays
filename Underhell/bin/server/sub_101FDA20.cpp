int __thiscall sub_101FDA20(int this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  double v7; // st7
  char String[256]; // [esp+Ch] [ebp-100h] BYREF

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)::String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  sub_104299C0(String, v4, 0xFFu);
  v5 = strtok(String, " ");
  if ( v5 )
    *(float *)(this + 800) = atof(v5);
  else
    *(float *)(this + 800) = *(float *)(this + 808);
  v6 = strtok(0, " ");
  if ( v6 )
    v7 = atof(v6);
  else
    v7 = 1.0;
  *(float *)(this + 804) = (*(float *)(this + 800) - *(float *)(this + 808)) / v7;
  sub_100EC3F0((_DWORD *)this, (int)sub_101FD930, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
