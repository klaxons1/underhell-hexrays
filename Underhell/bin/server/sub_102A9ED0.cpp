void __thiscall sub_102A9ED0(_DWORD *this, int a2)
{
  __int64 v2; // [esp-8h] [ebp-Ch]
  float v3; // [esp+0h] [ebp-4h]

  v3 = 0.0;
  HIDWORD(v2) = this;
  LODWORD(v2) = this;
  switch ( a2 )
  {
    case 1:
      sub_1010DD80(this + 210, v2, v3);
      break;
    case 2:
      sub_1010DD80(this + 216, v2, v3);
      break;
    case 3:
      sub_1010DD80(this + 222, v2, v3);
      break;
    default:
      sub_1010DD80(this + 228, v2, v3);
      break;
  }
}
