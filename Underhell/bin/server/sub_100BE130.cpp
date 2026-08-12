void __thiscall sub_100BE130(void *this, _DWORD *a2, int a3)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+4h] [ebp-Ch] BYREF
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  sub_100BA880(a2, a3, (int)this + 912, &v4);
  v3 = v4 * v4 + v5 * v5 + v6 * v6;
  off_10689708(v3);
}
