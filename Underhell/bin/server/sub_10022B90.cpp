int __thiscall sub_10022B90(_QWORD *this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // [esp+4h] [ebp-Ch] BYREF
  unsigned __int64 *v4; // [esp+Ch] [ebp-4h]

  v4 = &v3;
  v1 = __rdtsc();
  v3 = v1;
  *this = v1 - *this;
  return v1;
}
