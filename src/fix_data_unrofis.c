if(wi->wav_header->num_channels == 1){
    for(i = 0; i < wi->nb_samples; i += 4){
        wi->left_fixed[2*i+1] = wi->left_side[i];
        wi->left_fixed[2*i+2] = 0;
        wi->left_fixed[2*(i+1)+1] = wi->left_side[i + 1];
        wi->left_fixed[2*(i+1)+2] = 0;
        wi->left_fixed[2*(i+2)+1] = wi->left_side[i + 2];
        wi->left_fixed[2*(i+2)+2] = 0;
        wi->left_fixed[2*(i+3)+1] = wi->left_side[i + 3];
        wi->left_fixed[2*(i+3)+2] = 0;
    }
}
if(wi->wav_header->num_channels == 2){
    for(i = 0; i < wi->nb_samples; i += 4){
        wi->left_fixed[2*i+1] = wi->left_side[i];
        wi->left_fixed[2*i+2] = 0;
        wi->left_fixed[2*(i+1)+1] = wi->left_side[i+1];
        wi->left_fixed[2*(i+1)+2] = 0;
        wi->left_fixed[2*(i+2)+1] = wi->left_side[i+2];
        wi->left_fixed[2*(i+2)+2] = 0;
        wi->left_fixed[2*(i+3)+1] = wi->left_side[i+3];
        wi->left_fixed[2*(i+3)+2] = 0;
    }
    for(i = 0; i < wi->nb_samples; i += 4){
        wi->right_fixed[2*i+1] = wi->right_side[i];
        wi->right_fixed[2*i+2] = 0;
        wi->right_fixed[2*(i+1)+1] = wi->right_side[i+1];
        wi->right_fixed[2*(i+1)+2] = 0;
        wi->right_fixed[2*(i+2)+1] = wi->right_side[i+2];
        wi->right_fixed[2*(i+2)+2] = 0;
        wi->right_fixed[2*(i+3)+1] = wi->right_side[i+3];
        wi->right_fixed[2*(i+3)+2] = 0;
    }
}
