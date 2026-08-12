int __thiscall sub_101348D0(int this, int a2)
{
  int result; // eax
  char **v4; // ecx
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  const char *v8; // edi
  const char *v9; // eax
  const char *v10; // edi
  const char *v11; // eax
  float v12; // [esp+0h] [ebp-110h]
  char String[256]; // [esp+10h] [ebp-100h] BYREF

  result = dword_106B31C8;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v4 = (char **)(a2 + 8);
    if ( *(_DWORD *)(a2 + 24) == 2 )
    {
      v5 = *v4;
      if ( !*v4 )
        v5 = (char *)::String;
    }
    else
    {
      v5 = (char *)sub_1010D460((int)v4);
    }
    sub_104299C0(String, v5, 0xFFu);
    v6 = strtok(String, " ");
    if ( v6 && *v6 )
    {
      *(float *)(this + 804) = atof(v6);
      v7 = strtok(0, " ");
      if ( v7 && *v7 )
      {
        *(float *)(this + 808) = atof(v7) + *(float *)(dword_106B31C8 + 12);
        *(float *)(this + 812) = *(float *)(dword_106B31C8 + 12);
        *(float *)(this + 800) = *(float *)(dword_106AFE04 + 44);
        v12 = *(float *)(dword_106B31C8 + 12) + 0.1;
        sub_100EC4A0((int *)this, v12, 0);
        return sub_100EC3F0((_DWORD *)this, (int)sub_10134850, 0.0, 0);
      }
      else
      {
        v8 = *(const char **)(this + 92);
        if ( !v8 )
          v8 = ::String;
        v9 = sub_100D6390((_DWORD *)this);
        return Warning(
                 "%s (%s) received BlendTonemapScale input without a blend time. Syntax: <target tonemap scale> <blend time>\n",
                 v8,
                 v9);
      }
    }
    else
    {
      v10 = *(const char **)(this + 92);
      if ( !v10 )
        v10 = ::String;
      v11 = sub_100D6390((_DWORD *)this);
      return Warning(
               "%s (%s) received BlendTonemapScale input without a target tonemap scale. Syntax: <target tonemap scale> <blend time>\n",
               v10,
               v11);
    }
  }
  return result;
}
