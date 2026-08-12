void __thiscall sub_100D7B40(void *this, float a2, float *a3)
{
  double v5; // st7
  double (__thiscall *v6)(void *, void *); // eax
  double v7; // st7
  float v8; // [esp+10h] [ebp+Ch]
  float v9; // [esp+10h] [ebp+Ch]
  float v10; // [esp+10h] [ebp+Ch]

  if ( !*(_DWORD *)(dword_10433944 + 48) )
  {
    if ( (byte_10432688 & 1) != 0 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 36))(dword_10439968);
      v8 = *(float *)(dword_104327EC + 44);
      v5 = ((double (__thiscall *)(void *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(this, &unk_104326C8);
      v6 = *(double (__thiscall **)(void *, void *))(*(_DWORD *)this + 64);
      *a3 = *a3 - v5 * (v8 * a2);
      v9 = *(float *)(dword_104327EC + 44);
      *a3 = v6(this, &unk_104326BC) * (v9 * a2) + *a3;
    }
    v10 = ((double (__thiscall *)(void *, int *))*(_DWORD *)(*(_DWORD *)this + 64))(this, dword_1043265C);
    v7 = ((double (__thiscall *)(void *, int *))*(_DWORD *)(*(_DWORD *)this + 64))(this, dword_10432650);
    *a3 = *a3 - *(float *)(dword_104327EC + 44) * a2 * v10;
    *a3 = a2 * *(float *)(dword_104327EC + 44) * v7 + *a3;
    if ( 0.0 != v10 || 0.0 != v7 )
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 36))(dword_10439968);
  }
}
