int __thiscall sub_100A97D0(int this, int a2)
{
  double v3; // st7
  double v4; // st7
  int v6; // [esp+Ch] [ebp-14h] BYREF
  float v7; // [esp+10h] [ebp-10h]
  float v8; // [esp+14h] [ebp-Ch]
  float v9; // [esp+18h] [ebp-8h]
  float v10; // [esp+1Ch] [ebp-4h]

  if ( a2 )
    v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v6 = -1;
  v3 = *(float *)(this + 980);
  if ( *(float *)(this + 984) > 0.0 )
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(
      *(float *)(this + 980),
      *(float *)(this + 984));
  v10 = v3;
  v9 = v3 + *(float *)(dword_106B31C8 + 12);
  v4 = *(float *)(this + 884);
  v8 = *(float *)(this + 884);
  v7 = -1.0;
  if ( *(float *)(this + 884) > 0.0 )
    v7 = v4 + *(float *)(dword_106B31C8 + 12);
  return sub_100A91F0((int *)(this + 996), *(_DWORD *)(this + 1008), &v6);
}
