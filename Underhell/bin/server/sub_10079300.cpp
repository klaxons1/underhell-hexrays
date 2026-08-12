int __thiscall sub_10079300(float *this, int a2, int a3)
{
  float v6; // [esp+4h] [ebp-1Ch]
  float v7; // [esp+8h] [ebp-18h]
  float v8; // [esp+Ch] [ebp-14h]
  float v9; // [esp+1Ch] [ebp-4h]
  float v10; // [esp+28h] [ebp+8h]

  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 100))(this, a2);
  v8 = this[8] * this[8] + this[7] * this[7] + this[9] * this[9];
  v9 = off_10689708(v8);
  v10 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 1) + 720))(*((_DWORD *)this + 1));
  v7 = (v10 + v9) * 0.5 * this[4];
  v6 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 1) + 720))(*((_DWORD *)this + 1));
  return sub_10078AE0((int)this, a2, v6, v7, a3);
}
