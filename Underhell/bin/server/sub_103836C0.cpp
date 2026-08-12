int __stdcall sub_103836C0(float *a1, int a2)
{
  int v2; // eax
  int result; // eax
  float v4[2]; // [esp+4h] [ebp-18h] BYREF
  float v5; // [esp+Ch] [ebp-10h]
  float v6; // [esp+10h] [ebp-Ch] BYREF
  float v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]

  if ( a1
    && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 320))(a1)
    && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1088))(a1) )
  {
    v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1096))(a1);
    v6 = 0.5;
    v7 = 0.5;
    v8 = 0.5;
    sub_101117D0(v2 + 320, &v6, v4);
    result = a2;
    *(float *)(a2 + 8) = v5;
  }
  else
  {
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.75;
    sub_10111070(a1 + 80, &v6, v4);
    result = a2;
    *(float *)(a2 + 8) = *(float *)(a2 + 8) + v5;
  }
  return result;
}
