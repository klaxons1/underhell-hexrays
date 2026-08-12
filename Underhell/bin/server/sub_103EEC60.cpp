void __thiscall sub_103EEC60(int this)
{
  int v2; // ebx
  int v3[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v4; // [esp+28h] [ebp-10h] BYREF
  float v5; // [esp+2Ch] [ebp-Ch]
  float v6; // [esp+30h] [ebp-8h]
  float v7; // [esp+34h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1956) && (double)*(int *)(this + 1164) <= 5.0 )
  {
    v7 = sub_10111020((float *)(this + 320));
    v4 = 0.5;
    v5 = 0.33000001;
    v6 = 0.25;
    sub_101117D0(this + 320, &v4, (float *)v3);
    v2 = (int)(v7 * 0.40000001);
    sub_1023D4B0(4096, (float *)v3, v2, 0.5, this, 0, 0);
    v4 = 0.5;
    v5 = 0.66000003;
    v6 = 0.25;
    sub_101117D0(this + 320, &v4, (float *)v3);
    sub_1023D4B0(4096, (float *)v3, v2, 0.5, this, 0, 0);
    *(float *)(this + 1956) = *(float *)(dword_106B31C8 + 12) + 0.5;
  }
}
